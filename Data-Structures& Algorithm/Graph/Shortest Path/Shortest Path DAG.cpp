class Solution {
private:
    void dfs(int node, vector<int>& visit, vector<vector<pair<int, int>>>& adj, stack<int>& topo) {
        visit[node] = 1;
        for (auto it : adj[node]) {
            if (!visit[it.first]) {
                dfs(it.first, visit, adj, topo);
            }
        }
        topo.push(node);
    }

public:
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // Build adjacency list
        vector<vector<pair<int, int>>> adj(V);
        for (int i = 0; i < E; ++i) {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
        }

        // Topological sort
        vector<int> visit(V, 0);
        stack<int> topo;
        for (int i = 0; i < V; ++i) {
            if (!visit[i]) {
                dfs(i, visit, adj, topo);
            }
        }

        // Shortest path initialization
        vector<int> dist(V, 1e9);
        dist[0] = 0;

        // Relaxing edges in topological order
        while (!topo.empty()) {
            int node = topo.top();
            topo.pop();

            if (dist[node] != 1e9) {
                for (auto it : adj[node]) {
                    int v = it.first;
                    int w = it.second;

                    if (dist[node] + w < dist[v]) {
                        dist[v] = dist[node] + w;
                    }
                }
            }
        }

        // Replace unreachable nodes with -1
        for (int i = 0; i < V; ++i) {
            if (dist[i] == 1e9)
                dist[i] = -1;
        }

        return dist;
    }
};

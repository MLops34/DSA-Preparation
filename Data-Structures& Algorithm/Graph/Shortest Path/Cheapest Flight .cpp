class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        queue<pair<int,pair<int,int>>>que;
        que.push({0,{src,0}});
        vector<int>dist(n,1e9);
        dist[src]=0;

        vector<vector<pair<int,int>>>adj(n);
        for(auto it: flights){
            adj[it[0]].push_back({it[1],it[2]});
        }

        while(!que.empty()){
            auto it=que.front();
            que.pop();
            int stop=it.first;
            int node=it.second.first;
            int cost=it.second.second;

            if(stop > k) continue;
            for(auto iter: adj[node]){
                int adjNode=iter.first;
                int edgeW=iter.second;

                if(cost+edgeW < dist[adjNode] && stop<=k){
                    dist[adjNode]=cost+edgeW;
                    que.push({stop+1,{adjNode,dist[adjNode]}});
                }
            }
        }
            if(dist[dst]==1e9) return -1;
            return dist[dst];

    }
};
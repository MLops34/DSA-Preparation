class Solution {
private:
    bool dfs(int start, int col, vector<int>& color, vector<vector<int>>& adj) {
        color[start] = col;
        for (auto it : adj[start]) {
            if (color[it] == -1) {
                if (dfs(it, !col, color, adj) == false) {
                    return false;
                }
            } 
            else if (color[it] == col) {
                return false;
            }
        }
        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(), -1);
        for (int i = 0; i < graph.size(); i++) {
            if (color[i] == -1) {
                if (dfs(i, 0, color, graph) == false) {
                    return false;
                }
            }
        }
        return true;
    }
};

class Solution {
    private:
    bool detectCycle(int src, vector<vector<int>>& adj, vector<int>& visit){
        visit[src]=1;
        queue<pair<int,int>>que;
        que.push({src,-1});
        while(!que.empty()){
            int node = que.front().first;
            int prnt = que.front().second;
            que.pop();
            for(auto it: adj[node]){
                if(!visit[it]){
                    visit[it]=1;
                    que.push({it,node});
                }
                else if(prnt!=it){
                    return true;
                }
            }
        }
        return false;
    }
    public:
      bool isCycle(int V, vector<vector<int>>& edges) {
          // Code here
          vector<vector<int>>adj(V);
          for(const auto& edge:edges){
              int v=edge[1];
              int u=edge[0];
              adj[u].push_back(v);
              adj[v].push_back(u);
          }
          vector<int> visit(V,0);
          for(int i=0;i<V;i++){
              if(!visit[i]){
                  if(detectCycle(i,adj,visit)==true){
                      return true;
                  }
              }
          }
          return false;
      }
  };
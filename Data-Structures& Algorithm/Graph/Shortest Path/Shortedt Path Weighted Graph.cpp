class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
          vector<vector<pair<int,int>>>adj(n+1);
          for(auto edge : edges){
              int u=edge[0];
              int v=edge[1];
              int w=edge[2];
              adj[u].push_back({v,w});
              adj[v].push_back({u,w});
          }
          priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair
          <int,int>>> pq;
          pq.push({0,1});
          vector<int>dist(n+1,1e9),parent(n+1);
          dist[1]=0;
          
          for(int i=1;i<=n;i++) parent[i]=i;
          
          while(!pq.empty()){
              int dis=pq.top().first;
              int node=pq.top().second;
              pq.pop();
              
              for(auto it: adj[node]){
                  int adjNode=it.first;
                  int edgeW=it.second;
                  
                  if(dis+edgeW < dist[adjNode]){
                      dist[adjNode]=dis+edgeW;
                      pq.push({dist[adjNode],adjNode});
                      parent[adjNode]=node;
                  }
              }
          }
          if(dist[n]==1e9) return{-1};
          int node=n;
          vector<int>path;
          while(parent[node]!=node){
              path.push_back(node);
              node=parent[node];
          }
          path.push_back(1);
          reverse(path.begin(),path.end());
          
          vector<int> result;
        result.push_back(dist[n]);             // Total path weight
        result.insert(result.end(), path.begin(), path.end()); // Path nodes
        return result;
          
    }
};
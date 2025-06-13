class Solution {
  public:
    // Function to find the shortest path from source to all other nodes
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        // code here
        vector<int>dist(adj.size(),1e9);
        dist[src]=0;
        queue<int>que;
        que.push(src);
        while(!que.empty()){
            int node=que.front();
            que.pop();
            for(auto it:adj[node]){
                if(dist[node] + 1 < dist[it]){
                    dist[it]=dist[node]+1;
                    que.push(it);
                }
            }
        }
        vector<int>ans(adj.size());
        for(int i=0;i<adj.size();i++){
            if(dist[i]!=1e9){
                ans[i]=dist[i];
            }
            else{
                ans[i]=-1;
            }
        }
        return ans;
    }
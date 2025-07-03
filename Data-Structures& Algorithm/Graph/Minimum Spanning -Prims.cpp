class Solution {
    
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    typedef pair<int,int> P;
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // code here
        priority_queue<P,vector<P>,greater<P>>pq;
        vector<bool>visit(V,false);
        pq.push({0,0});
        int sum=0;
        
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int wt = p.first;
            int node  =  p.second;
            
            if(visit[node]==true) continue;
            
            visit[node]=true;
            sum+=wt;
            
            for(auto it:adj[node]){
                int Nnode=it[0];
                int Nwt=it[1];
                if(visit[Nnode]==false){
                    pq.push({Nwt,Nnode});
                }
            }
        }
        return sum;
    }
};
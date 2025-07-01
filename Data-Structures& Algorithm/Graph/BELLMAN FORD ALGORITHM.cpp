// User function Template for C++
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int>dist(V,1e8);
        dist[src]=0;
        for(int i=1;i<=V-1;i++){
            for(auto & edge : edges ){
                int u=edge[0],v=edge[1],wt=edge[2];
                if(dist[u] + wt < dist[v] && dist[u]!=1e8){
                    dist[v]=dist[u]+wt;
                }
            }
        }
        
        for(auto & edge : edges ){
                int u=edge[0],v=edge[1],wt=edge[2];
                if(dist[u] + wt < dist[v] && dist[v]!=1e8){
                    return {-1};
                }
            }
            
         return dist;
    }
};
// Time Complexity: O(V*E)
// Space Complexity: O(V)   

int main() {
    // Example usage
    Solution sol;
    int V = 5; // Number of vertices
    vector<vector<int>> edges = {
        {0, 1, -1},
        {0, 2, 4},
        {1, 2, 3},
        {1, 3, 2},
        {1, 4, 2},
        {3, 2, 5},
        {3, 1, 1},
        {4, 3, -3}
    };
    int src = 0; // Source vertex

    vector<int> result = sol.bellmanFord(V, edges, src);
    
    for (int dist : result) {
        cout << dist << " ";   // Print the distances from the source vertex   
    }
    return 0;
}
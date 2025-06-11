class Solution {
private:
    bool dfs(int start,vector<int>& visit, vector<vector<int>>& adj,vector<int>& topo){
        visit[start]=1;
        for(auto it: adj[start]){
            if(visit[it]==0){
                if(dfs(it,visit,adj,topo)==false){  
                    return false;
                }
            }
            else if(visit[it]==1){
                    return false;
                }
            }
        visit[start]=2;
        topo.push_back(start);
        return true;
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>visit(numCourses,0);
        vector<vector<int>>adj(numCourses);
        for(const auto &pre:prerequisites){
            adj[pre[1]].push_back(pre[0]);
        }
        vector<int>topo;
        for(int i=0;i<numCourses;i++){
            if(visit[i]==0){
                if(dfs(i,visit,adj,topo)==false){
                    return {};
                }
            }
        }
        reverse(topo.begin(),topo.end());
        return topo;
    }
};
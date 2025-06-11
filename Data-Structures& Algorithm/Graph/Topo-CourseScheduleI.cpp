class Solution {
private:
    bool dfs(int start, vector<int>&visit,vector<vector<int>>& adj){
        visit[start]=1;
        for(auto it: adj[start]){
            if(!visit[it]){
                if(dfs(it,visit,adj)==false){
                    return false;
                }
            }
            else if (visit[it]==1){
                return false;
            }
        }
        visit[start]=2;
        return true;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>visit(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for (const auto& pre : prerequisites) {
            adj[pre[1]].push_back(pre[0]); 
        }
        for(int i=0;i<numCourses;i++){
            if(!visit[i]){
                if(dfs(i,visit,adj)==false){
                    return false;
                }
            }
        }
        return true;
    }
};
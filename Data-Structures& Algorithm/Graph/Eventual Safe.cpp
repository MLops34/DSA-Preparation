class Solution {
private:
    bool dfs(int node,vector<int>& visit,vector<int>& pathvisit,vector<int>& chk,vector<vector<int>>& graph ){
        visit[node]=1;
        pathvisit[node]=1;
        chk[node]=0;
        for(auto it:graph[node]){
            if(visit[it]==0){
                if(dfs(it,visit,pathvisit,chk,graph)==true){
                    return true;
                }
            }
            else if(pathvisit[it]){
                return true;
            }
        }
        chk[node]=1;
        pathvisit[node]=0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>chk(n,0);
        vector<int>visit(n,0);
        vector<int>pathvisit(n,0);

        vector<int>safe;
        for(int i=0;i<n;i++){
            if(visit[i]==0){
                dfs(i,visit,pathvisit,chk,graph);
            }
        }
        for(int i=0;i<n;i++){
            if(chk[i]==1){
                safe.push_back(i);
            }
        }
        return safe;
    }
};
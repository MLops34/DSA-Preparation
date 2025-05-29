class Solution {
    private:
        void dfs(int& start, vector<vector<int>>& adjls, vector<int>& visit, int &v, int &e){
            visit[start]=1;
            v++;
            e+=adjls[start].size();
            for(auto it: adjls[start]){
                if(!visit[it]){
                    dfs(it,adjls,visit,v,e);
                }
            }
        }
    public:
        int countCompleteComponents(int n, vector<vector<int>>& edges) {
            vector<vector<int>>adjls(n);
            for(const auto& edge:edges){ // list creation;
                int u=edge[0],v=edge[1];
                adjls[u].push_back(v);
                adjls[v].push_back(u);
    
            }
            vector<int> visit(n,0);
            int res=0;
            for(int i=0;i<n;i++){
                if(visit[i]==1){
                    continue;
                }
                int v=0,e=0;
                dfs(i,adjls,visit,v,e);
    
                if( (v*(v-1)) ==e){
                    res++;
                }
            }
            return res;
        } 
    };  TIme
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        vector<vector<int>> directions{ {0,1},{0,-1},{1,0},{-1,0}};

        vector<vector<int>> result(m,vector<int>(n,-1));
        queue<pair<int,int>>que;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    result[i][j]=0;
                    que.push({i,j});
                }
            }
        }

        while(!que.empty()){
            int i=que.front().first;
            int j=que.front().second;

            que.pop();

            for(auto &dir:directions){
                int newi= i+ dir[0];
                int newj= j+ dir[1];

                if(newi>=0 && newi<m && newj>=0 && newj<n && result[newi][newj]==-1){
                    result[newi][newj]=result[i][j]+1;
                    que.push({newi,newj});
                }

            }
        }

        return result;
    }
};
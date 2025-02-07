class Solution {
    public:
        vector<vector<int>> transpose(vector<vector<int>>& matrix) {
            int n=matrix[0].size(),m=matrix.size();
            vector<vector<int>> result(n, vector<int>(m));
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    result[j][i]=matrix[i][j];
                }
            }
            return result;
        }
    };



class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            unordered_map<int,int>mpp;
            int n=grid.size();
            int N=n*n;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    mpp[grid[i][j]]++;
                }
            }
            int a=0,b=0;
            for(int num=1;num<=N;num++){
                if(!mpp.count(num)){
                    b=num;
                }else if (mpp[num]==2){
                    a=num;
                }
                if(a==-1 && b==-1){
                    break;
                }
             }
    
            return {a,b};
        }
    };
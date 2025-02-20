class Solution {
    public:
        vector<vector<int>>result;
        void solve(int index, int k, int n, vector<int>&temp,int target){
            if(temp.size()==k){
                if(target==0){
                    result.push_back(temp);
                }
                return ;
            }
            for(int i=index;i<=9;i++){
                if(target<0) break;
    
                temp.push_back(i);
                solve(i+1,k,n,temp,target-i);
                temp.pop_back();
            }
        }
        vector<vector<int>> combinationSum3(int k, int n) {
            vector<int>temp;
            int index=1,target=n;
            solve(index,k,n,temp,target);
            return result;
        }
    };
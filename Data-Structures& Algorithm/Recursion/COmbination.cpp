class Solution {
    public:
        vector<vector<int>>result;
        void solve( int index, vector<int>&temp, int k,int n){
            if(k==temp.size()){
                result.push_back(temp);
                return;
            }
            for(int i=index;i<=n;i++){
                temp.push_back(i);
                solve(i+1,temp,k,n);
                temp.pop_back();
            }
        }
    
        vector<vector<int>> combine(int n, int k) {
            vector<int>temp;
            solve(1,temp,k,n);
            return result;
            
        }
    };
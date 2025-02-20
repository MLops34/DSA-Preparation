class Solution {
    public:
        vector<vector<int>>result;
        void solve(int index,vector<int>& temp,vector<int>& candidates, int target ){
            if(target==0){
                result.push_back(temp);
                return ;
            }
            for (int i=index ; i<candidates.size(); i++){
                if( i>index && candidates[i]==candidates[i-1]) continue;
                if(candidates[i] > target) break;
                temp.push_back(candidates[i]);
                solve(i+1,temp,candidates,target-candidates[i]);
                temp.pop_back();
            }
    
        }
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<int>temp;
            int index=0;
            sort(candidates.begin(),candidates.end());
            solve(index,temp,candidates,target);
            return result;
            
        }
    };
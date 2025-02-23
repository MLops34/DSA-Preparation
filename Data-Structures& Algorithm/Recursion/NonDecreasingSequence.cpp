class Solution {
    public:
        set<vector<int>>result;
        bool isValid(int index,vector<int>& nums,vector<int>&temp){
            if(temp.size()==0) return true;
            return nums[index]>=temp.back();}
        void solve(int index,vector<int>& temp, vector<int>& nums){
            if(temp.size()>=2){
                result.insert(temp);}
            if(index==nums.size()) return ;
            for(int i=index;i<nums.size();i++){
                if(isValid(i,nums,temp)){
                    temp.push_back(nums[i]);
                    solve(i+1,temp,nums);
                    temp.pop_back();
                }}}
        vector<vector<int>> findSubsequences(vector<int>& nums) {
            vector<int>temp;
            solve(0,temp,nums);
            return vector(result.begin(),result.end());
            
        }
    };
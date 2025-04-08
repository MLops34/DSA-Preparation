class Solution {
    public:
        bool check(vector<int>&nums,int i){
            unordered_set<int>set;
            for(int j=i;j<nums.size();j++){
                if(set.count(nums[j])) return false;
                set.insert(nums[j]);
            }
            return true;
        }
        int minimumOperations(vector<int>& nums) {
            int Ops=0;
            for(int i=0;i<nums.size();i=i+3){
                if(check(nums,i)==true) return Ops;
                Ops++;  
            }
            return Ops;
        }
        
    };
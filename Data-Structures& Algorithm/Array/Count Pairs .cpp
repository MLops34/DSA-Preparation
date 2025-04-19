class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            sort(nums.begin(),nums.end());
            long long res=0,idx=0,y=0,x=0;
            for(int i=0;i<nums.size();i++){
                idx=lower_bound(begin(nums)+i+1,end(nums),lower-nums[i])-begin(nums);
                x=idx-i-1;
                idx=upper_bound(begin(nums)+i+1,end(nums),upper-nums[i])-begin(nums);
                y=idx-i-1;
                res=res+(y-x);
            }
            return res;
        }
    };
Maximum Count of Positive Integer and Negative Integer

class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int c_p = 0,c_n =0;
            for(int i =0 ;i<nums.size();i++)
            {
                if(nums[i] < 0) c_n++;
                if(nums[i] > 0) c_p++;
            }
            return max(c_n,c_p);
        }
    };
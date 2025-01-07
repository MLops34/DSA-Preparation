class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int prod=1;
        int i=0,cnt=0;
        for(int j=0;j<nums.size();j++){
            prod=1;
            for(int i=j;i<nums.size();i++){
                prod=prod*nums[i];
                if(prod>=k) break;
                cnt++;
            }
       }
        return cnt;
    }
};
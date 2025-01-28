class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(); int maxi=-1;
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        for(int i=1;i<=n-2;i++){
            if( nums[i]>nums[i+1] && nums[i]>nums[i-1]){
                maxi=max(maxi,i);
            }
        }
        return maxi;
    }
};
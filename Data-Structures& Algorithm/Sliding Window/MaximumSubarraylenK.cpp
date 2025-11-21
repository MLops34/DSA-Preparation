class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {
        vector<int>res;
        int n=nums.size();
        int bs=0;
        for(int i=1;i<=n-k;i++){
            for(int j=0;j<k;j++){
                if(nums[i+j]>nums[bs+j]){
                    bs=i;
                    break;
                }else{
                    break;
                }
            }
        }
        
        for(int i=bs;i<bs+k;i++){
            res.push_back(nums[i]);
        }
        return res;
    }
};
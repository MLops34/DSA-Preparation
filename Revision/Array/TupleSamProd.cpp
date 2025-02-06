class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        int ans=0,n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int prod=nums[i]*nums[j];
                ans=ans+8*mpp[prod];
                mpp[prod]++;
            }
        }
        return ans;
        
    }
};
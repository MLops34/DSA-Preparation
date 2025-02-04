class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi=0,l=0,r=0,sum=nums[l],n=nums.size();
        if(n==1) return nums[0];
        while(r<n){
            int j=r+1;
            if(j<nums.size() && nums[r]<nums[j]){
                sum=sum+nums[j];
            }
            else if(!(j<n)){
                maxi=max(maxi,sum);
                break;
            }else{
                maxi=max(maxi,sum);
                l=j;
                sum=nums[l];
            }
            
            r++; 
        }
        return maxi;        
    }
};
class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int cntEq=0,cntless=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<pivot){
                    cntless++;
                }else if (nums[i]==pivot){
                    cntEq++;
                }
            }
    
            vector<int>result(nums.size());
            int i=0,j=cntless,k=cntless+cntEq;
            for(int z=0;z<nums.size();z++){
                if(nums[z]<pivot){
                    result[i]=nums[z];
                    i++;
                }else if (nums[z]==pivot){
                    result[j]=nums[z];
                    j++;
                }else{
                    result[k]=nums[z];
                    k++;
                }
            }
            return result;
        }
    };
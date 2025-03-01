class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for(int i=0;i<nums.size();i++){
                if( i+1 < nums.size() && nums[i]==nums[i+1]){
                    nums[i]=2*nums[i];
                    nums[i+1]=0;
                    continue;
                }else continue; 
            }
            int i=0,x=0;
            while(i<nums.size()){
                if(nums[i]!=0){
                    int temp=nums[i];
                    nums[i]=nums[x];
                    nums[x]=temp;
                    x++;
                }
                i++;
            }
            return nums;
        }
    };
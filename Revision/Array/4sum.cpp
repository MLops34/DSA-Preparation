class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;int z,k;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                k=j+1;
                z=nums.size()-1;
                while(k<z){
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[z];
                    if(sum>target) z--;
                    else if (sum<target) k++;
                    else{
                        ans.push_back({nums[i],nums[j],nums[k],nums[z]});
                        k++,z--;
                        while( k < z && nums[k]==nums[k-1]) k++;
                        while( k < z && nums[z]==nums[z+1]) z--;
                    
                    }
                }
                
            }
        }
        return ans;
        
    }
};
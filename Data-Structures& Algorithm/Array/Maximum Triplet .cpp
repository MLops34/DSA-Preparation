class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            long long calc=0 ,maxi=0,diff=0;
            for(long long i=0;i<nums.size();i++){
                for(long long j=i+1;j<nums.size();j++){
                    long long k=j+1;
                    while(k<nums.size()){
                        diff=nums[i]-nums[j];
                        calc=diff * nums[k];
                        maxi=max(calc,maxi);
                        k++;
                        }
                    }
                }
            if(maxi<0) return 0;
            return maxi;
        }
    };

    Time--O(n^3);
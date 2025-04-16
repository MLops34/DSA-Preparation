class Solution {
    public:
        long long countGood(vector<int>& nums, int k) {
            long long cnt=0,pair=0,left=0,res=0;
            unordered_map<int,int>mpp;
            for(int right=0;right<nums.size();right++){
                pair=pair+mpp[nums[right]];
                mpp[nums[right]]++;
    
                while(pair>=k){
                    res+=nums.size()-right;
                    mpp[nums[left]]--;
                    pair=pair-mpp[nums[left]];
                    left++;
                }
            }
            return res;
        }
    }; Time-O(N) due to traversing right for all elements in array and left also for atmost all elements and map Operatiom
    space-O(n) due to map OCCUPIED SPACE
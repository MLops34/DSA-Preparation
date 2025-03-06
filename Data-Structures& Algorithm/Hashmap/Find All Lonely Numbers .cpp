class Solution {
    public:
        vector<int> findLonely(vector<int>& nums) {
            int n=nums.size();
            unordered_map<int,int>mpp;
            for(int num : nums){
                mpp[num]++;
            }
            vector<int>result;
            for(int num : nums){
                if(mpp[num]<2){
                    if(mpp.find(num-1)==mpp.end() && mpp.find(num+1)==mpp.end()){
                    result.push_back(num);
                }
                }
            }
            return result;
        }
    };
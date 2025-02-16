#include <cmath>
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = pow(2, nums.size());
        vector<vector<int>> Ans(size);
        
        for(int i = 0; i < size; i++) {
            vector<int> res;
            for(int j = 0; j < nums.size(); j++) {
                if(i & (1 << j)) {
                    res.push_back(nums[j]);
                }
            }
            Ans[i] = res;
        }
        
        return Ans;
    }
};
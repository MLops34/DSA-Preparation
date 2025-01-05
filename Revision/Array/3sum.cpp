#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size(); 
        for (int i = 0; i < n; i++) { 
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum > 0) {
                    k--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {-2, -2, -2, -1, -1, -1, 0, 0, 0, 2, 2, 2, 2};
    Solution sol;
    vector<vector<int>> temp2 = sol.threeSum(nums);

    int n = temp2.size();  
    cout << "The Answer is: ";
    for (int i = 0; i < n; i++) {  
        cout << "[";
        for (int j = 0; j < temp2[i].size(); j++) { 
            cout << temp2[i][j] << ",";
        }
        cout << "] ";
    }
    cout << endl;

    return 0;
}

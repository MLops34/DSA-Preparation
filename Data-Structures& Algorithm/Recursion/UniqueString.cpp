///ITERATIVE APPROACH

class Solution {
    public:
        string findDifferentBinaryString(vector<string>& nums) {
            int n = nums.size();
            string result = "";
            
            for (int i = 0; i < n; i++) {
                if (nums[i][i] == '0') {
                    result.push_back('1');
                } else {
                    result.push_back('0');
                }
            }
            
            return result;
        }
    };

///BACKTRACKING APPROACH
class Solution {
    public:
        void solve(int index, string& str, vector<string>& nums, int n, string& result) {
            if (index == n) {
                for (const string& num : nums) {
                    if (num == str) {
                        return;
                    }
                }
                result = str;
                return;
            }
            
            str.push_back('0');
            solve(index + 1, str, nums, n, result);
            if (!result.empty()) return;
            
            str.pop_back();
            str.push_back('1');
            solve(index + 1, str, nums, n, result);
            str.pop_back();
        }
        
        string findDifferentBinaryString(vector<string>& nums) {
            int n = nums.size();
            string result = "";
            string str = "";
            solve(0, str, nums, n, result);
            return result;
        }
    };
    
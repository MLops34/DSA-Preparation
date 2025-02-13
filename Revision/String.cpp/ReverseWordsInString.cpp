class Solution {
    public:
        string reverseWords(string s) {
            int left = 0;
            int right = s.length() - 1;
            
            string temp = "";
            string ans = "";
            
            while (left <= right) {
                char ch = s[left];
                if (ch != ' ') {
                    temp += ch;
                } else if (ch == ' ' && temp != "") {
                    if (ans != "") {
                        ans = temp + " " + ans;
                    } else {
                        ans = temp;
                    }
                    temp = "";
                }
                left++;
            }
            
            if (temp != "") {
                if (ans != "") {
                    ans = temp + " " + ans;
                } else {
                    ans = temp;
                }
            }
            
            while (!ans.empty() && ans[0] == ' ') ans.erase(ans.begin());
            while (!ans.empty() && ans[ans.length() - 1] == ' ') ans.erase(ans.end() - 1);
            
            return ans;
        }
    };
    
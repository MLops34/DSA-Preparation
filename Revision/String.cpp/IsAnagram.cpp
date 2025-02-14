class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) {
                return false;
            }
    
            vector<int> count(26, 0);
    
            for (char c : s) {
                count[c - 'a'] += 1;
            }
    
            for (char c : t) {
                if (count[c - 'a'] == 0) {
                    return false;
                }
                count[c - 'a'] -= 1;
            }
    
            return true;        
        }
    };
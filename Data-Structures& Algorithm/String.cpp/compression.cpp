#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int stringCompression(vector<char>& chars) {
        int n = chars.size();
        int r = 0, w = 0;

        while (r < n) {
            char ch = chars[r];
            int cnt = 0;

            while (r < n && chars[r] == ch) {
                r++;
                cnt++;
            }

            chars[w++] = ch;

            if (cnt > 1) {
                string scnt = to_string(cnt);
                for (char c : scnt) {
                    chars[w++] = c;
                }
            }
        }
        return w;
    }
};

int main() {
    vector<char> chars = {'a','a','a','b','b','b'};
    Solution sol;
    int index = sol.stringCompression(chars);

    for (int i = 0; i < index; i++) {
        cout << chars[i] << " ";
    }

    return 0;
}

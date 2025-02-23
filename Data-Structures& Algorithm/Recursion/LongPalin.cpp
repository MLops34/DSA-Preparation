class Solution {
    public:
        bool solve(string &s,int i, int j){
            if(i>=j) return true;
            if(s[i]==s[j]) return solve(s,i+1,j-1);
            return false;
        }
        string longestPalindrome(string s) {
            int maxlen=INT_MIN;
            int sp=0;
            for(int i=0;i<s.length();i++){
                for(int j=i;j<s.length();j++){
                    if(solve(s,i,j)==true){
                        if(j - i + 1 > maxlen){
                            maxlen=j-i+1;
                            sp=i;
                        }
                    }
                }
            }
            return s.substr(sp,maxlen);
            
        }
    };
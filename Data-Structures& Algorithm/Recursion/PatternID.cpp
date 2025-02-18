class Solution {
    public:
        bool matchesPattern(string &pattern, string &num){
            for(int i=0;i<pattern.size();i++){
                if(pattern[i]=='I' && num[i] > num[i+1]|| pattern[i]=='D' && num[i] < num[i+1]) return false;
            }
            return true;
        }
        string smallestNumber(string pattern) {
            string num="";
            int n=pattern.length();
            for(int i=1;i<=(n+1);i++){
                num.push_back('0'+ i );
            }
            while(!matchesPattern(pattern,num)){
                next_permutation(begin(num),end(num));
            }
            return num;
        }
    }; 
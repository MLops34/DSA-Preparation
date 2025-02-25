class Solution {
    public:
        int lengthOfLastWord(string s) {
            int n=s.size();
            int cnt=0,len=0;
            for(int i=n-1;i>=0;i--){
                if(s[i]==' ' && len==0){
                    cnt++;
                }else if ( s[i]!=' '){
                    cnt=0;
                    len++;
                }else{
                    if(s[i]==' ' && len>0){
                        break;
                    }
                }
            }
            return len;
            
        }
    };
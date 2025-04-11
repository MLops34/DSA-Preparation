class Solution {
    public:
        bool chkSymm(int num){
            string s=to_string(num);
            int sz=s.size();
            if(sz%2==1) return false;
            int s1=0,s2=0,hf=sz/2;
            for(int i=0;i<hf;i++) s1+=s[i]-'0';
            for(int i=hf;i<sz;i++) s2+=s[i]-'0';
            return s1==s2;
    
        }
        int countSymmetricIntegers(int low, int high) {
            int cnt=0;
            for(int i=low; i<=high; i++){
                if(chkSymm(i)){
                    cnt++;
                }
            }
            return cnt;
        }
    };
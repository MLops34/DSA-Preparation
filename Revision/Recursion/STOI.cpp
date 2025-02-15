class Solution {
    public:
        int stoi(string s,int sign,int i,long res){
            
            if(res*sign >= INT_MAX) return INT_MAX;
            if( res* sign <= INT_MIN) return INT_MIN;
            if( i>=s.size() || s[i]<'0' || s[i]>'9') return res*sign;
            res=stoi(s,sign ,i+1 ,(res*10+(s[i]-'0')));
            return res;
        }
        int myAtoi(string s) {
            int sign=1;
            int i=0,n=s.size();
            if(i==n) return 0;
            while(s[i]==' ' && i<n) i++;
            if(s[i]=='-'){
                sign=-1;
                i++;
            }else if (s[i]=='+'){
                i++;
            }
    
            return stoi(s,sign,i,0); 
        }
    };
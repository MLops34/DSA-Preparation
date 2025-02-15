class Solution {
    public:
        int check(int i, string s, int num, int Currsum){
            if(Currsum>num) return false;
            if(i==s.size()) return Currsum==num;
            bool possible=false;
            for(int j=i;j<s.size();j++){
                string val=s.substr(i,j-i+1);
                int res=stoi(val);
                possible=possible || check(j+1,s,num,Currsum+res);
                if(possible) return true;
            }
            return false;
        }
        int punishmentNumber(int n) {  
            int result=0,sq=0;
            for(int num=1;num<=n;num++){
                sq=num*num;
                string s=to_string(sq);
                if(check(0,s,num,0)==true){
                    result=result+sq;
                }
            }
            return result;
        }
    };
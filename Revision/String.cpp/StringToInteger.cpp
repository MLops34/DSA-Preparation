#include <iostream>
#include <climits>
#include <cctype>
class Solution {
public:
    int myAtoi(string s) {
        long res=0;
        int n=s.length();
        int i=0;
        bool ans=false;
        while(i<n && s[i]==' ') i++;
        if(i<n && s[i]=='-'){
            ans=true;
            i++;
        }else if (i< n && s[i]=='+'){
            i++;
        }
        while( i<n && std::isdigit(s[i])){
            int ascii=s[i]-'0';
            res= res*10+ ascii;
            if(ans){
                if(ans && -res<INT_MIN){
                    return INT_MIN;
                }
            }else if(!ans && res>INT_MAX) {
                return INT_MAX;
            }
            i++;
        }
        if(res==0) return 0;
        return ans? -res : res ;
    }
};
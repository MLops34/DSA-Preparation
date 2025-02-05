//OPTIMAL  class Solution {
// public:
//     bool areAlmostEqual(string s1, string s2) {
        
//         int n=s1.length();
//         if(n!=s2.length()) return false;

//         vector<int>chk;
//         for(long long i=0;i<n;i++){
//             if(s1[i]!=s2[i]){
//                 chk.push_back(i);
//             }
//         }

//         if(chk.size()==0){
//             return true;
//         }
//         if(chk.size()==2){
//             int x=chk[0],y=chk[1];
//             return s1[x]==s2[y] && s1[y]==s2[x];
//         }
//         return false;
//     }
// };


// BRUTE

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        long long i=0,j=0,cnt=0;
        long long n=s1.length(),m=s2.length();
        if(n==m){
            while(i<n && j<m){
                if(s1[i]>s2[j]) i++;
                else if (s1[i]<s2[j]) j++;
                else{
                    cnt++;
                    i++;
                    j++;
                }

            }
            if((n-cnt)<=2) return true;
        }
        return false;    
    }
};


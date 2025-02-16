#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {

    public:
        vector<string>result;
    
        bool isValid(string str){
            int cnt=0;
            for(char &c:str){
                if(c=='(') cnt++;
                else cnt--;
                if(cnt<0) return false;
            }
            return cnt==0;
        }
        
        void solve(string &curr,int n){
            if(curr.length()==2*n){
                if(isValid(curr)){
                    result.push_back(curr);
                }
                return ;
            }
            curr.push_back('(');
            solve(curr,n);
            curr.pop_back();
    
            curr.push_back(')');
            solve(curr,n);
            curr.pop_back();
    
        }
        vector<string> generateParenthesis(int n) {
            string curr="";
            solve(curr,n);
            return result;
        }
    };


    int main(){
        Solution sol;
        vector<string>ans=sol.generateParenthesis(3);
        for(int i=0;i<ans.size();i++){
            cout << ans[i] ;
        }
        return 0; 
    }
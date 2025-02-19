class Solution {
    public:
        void solve(string &str, vector<string>&result, int n){
            if(str.length()==n){
                result.push_back(str);
                return ;
            }
            for(char ch ='a';ch <='c';ch++){
                if(!str.empty() && str.back()==ch) continue;
    
                str.push_back(ch);
                solve(str,result,n);
                str.pop_back();
            }
        }
        string getHappyString(int n, int k) {
            string str="";
            vector<string>result;
            solve(str, result, n);
    
            if(result.size()<k) return "";
            return result[k-1];
            
        }
    };
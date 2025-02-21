class Solution {
    public:
        vector<vector<string>>result;
        bool isPalin(const string &s){
            return s==string(s.rbegin(),s.rend());
        }
        void solve(int index,vector<string>&temp,string& s){
            if(index==s.length()){
                result.push_back(temp);
                return ;
            }
    
            for(int i=index;i<s.length();i++){
                string sub=s.substr(index,i-index+1);
                if(isPalin(sub)){
                    temp.push_back(sub);
                    solve(i+1,temp,s);
                    temp.pop_back();
                }
            }
        }
        vector<vector<string>> partition(string s) {
            vector<string>temp;
            int index=0;
            solve(index,temp,s);
            return result;
        }
    };  
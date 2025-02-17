class Solution {
    public:
        int n;
        void solve(string &tiles, string &curr, unordered_set<string>&result, vector<bool>&used){
            result.insert(curr);
    
            for(int i = 0; i< n;i++){
                if(used[i]==true) continue;
                used[i]=true;
                curr.push_back(tiles[i]);
                solve(tiles,curr,result,used);
    
                used[i]=false;
                curr.pop_back();
                }
        }
        int numTilePossibilities(string tiles) {
            n=tiles.size();
            
            unordered_set<string> result;
            vector<bool>used(n,false);
            string curr="";
            solve(tiles,curr,result,used);
    
            return result.size()-1;
        }
    };class Solution {
        public:
            int n;
            void solve(string &tiles, string &curr, unordered_set<string>&result, vector<bool>&used){
                result.insert(curr);
        
                for(int i = 0; i< n;i++){
                    if(used[i]==true) continue;
                    used[i]=true;
                    curr.push_back(tiles[i]);
                    solve(tiles,curr,result,used);
        
                    used[i]=false;
                    curr.pop_back();
                    }
            }
            int numTilePossibilities(string tiles) {
                n=tiles.size();
                
                unordered_set<string> result;
                vector<bool>used(n,false);
                string curr="";
                solve(tiles,curr,result,used);
        
                return result.size()-1;
            }
        };//Complete
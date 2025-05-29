class Solution {
    public:
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int n=image[0].size();
            int m=image.size();
            int prev=image[sr][sc];
    
        if(prev==color) return image;
        
            queue<pair<int,int>>que;
            que.push({sr,sc});
            image[sr][sc]=color;
    
            int drow[]={-1,0,1,0};
            int dcol[]={0,1,0,-1};
    
            while(!que.empty()){
                int r=que.front().first;
                int col=que.front().second;
                que.pop();
    
                for(int i=0;i<4;i++){
                    int nrow= r+ drow[i];
                    int ncol= col + dcol[i];
                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol]==prev){
                        image[nrow][ncol] = color;
                        que.push({nrow,ncol});
                    }
                }
            }
    
            return image;
    
            
        }
    };
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        int visit[m][n];
        queue<pair<pair<int,int>,int>>que;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    que.push({{i,j},0});
                    visit[i][j]=2;
                }
                else{
                    visit[i][j]=0;
                }
            }
        }
        int tm=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!que.empty()){
            int r=que.front().first.first;
            int c=que.front().first.second;
            int t=que.front().second;
            tm=max(t,tm);
            que.pop();
            for(int i=0;i<4;i++){
                int nrow= r + drow[i];
                int ncol= c + dcol[i];
                if( nrow>=0 && nrow<m && ncol>=0 && ncol<n && visit[nrow][ncol]!=2 && grid[nrow][ncol]==1){
                    que.push( { {nrow,ncol},t+1 } );
                    visit[nrow][ncol]=2;
                    grid[nrow][ncol]=2;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && visit[i][j]!=2){
                    return -1;
                }
            }
        }
        return tm;
    }
};
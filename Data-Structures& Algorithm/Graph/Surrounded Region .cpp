class Solution {
private:
    void dfs(int row,int col, vector<vector<int>>& visit,vector<vector<char>>& board,int rowd[] ,int cold[]){
        visit[row][col]=1;
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<4;i++){
            int nr= row + rowd[i];
            int nc= col + cold[i];
            
            if(nr>=0 && nr<m && nc>=0 && nc<n && visit[nr][nc]==0 && board[nr][nc]=='O'){
                dfs(nr,nc,visit,board,rowd,cold);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        int rowd[]={-1,0,1,0};
        int cold[]={0,1,0,-1};
        vector<vector<int>>visit(m,vector<int>(n,0));

        for(int j=0;j<n;j++){
            if(board[0][j]=='O'){
                dfs(0,j,visit,board,rowd,cold);
            }
            if(board[m-1][j]=='O'){
                dfs(m-1,j,visit,board,rowd,cold);
            }
        }

        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                dfs(i,0,visit,board,rowd,cold);
            }
            if(board[i][n-1]=='O'){
                dfs(i,n-1,visit,board,rowd,cold);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && visit[i][j]!=1){
                    board[i][j]='X';
                }
            }
        }
    }
};
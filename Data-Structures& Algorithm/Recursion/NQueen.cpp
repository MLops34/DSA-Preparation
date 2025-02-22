class Solution {
    public:
        vector<vector<string>>result;
        int N;
        bool isValid(int row,int col,vector<string>&board){
            for(int r =row-1;r>=0;r--){
                if(board[r][col]=='Q') return false;
            }
            for(int r=row-1,c=col-1;r>=0&&c>=0;r--,c--){
                if(board[r][c] == 'Q') return false;
            }
            for(int r=row-1,c=col+1;r>=0&&c<N;r--,c++){
                if(board[r][c] == 'Q') return false;
            }
        
        return true;
        }
        void solve(int row,vector<string>&board){
            if(row>=N){
                result.push_back(board);
                return;
            }
            for(int col=0;col<N;col++){
                if(isValid(row,col,board)){
                    board[row][col]='Q';
                    solve(row+1,board);
                    board[row][col]='.';
                }
            }
        }
        vector<vector<string>> solveNQueens(int n) {
            N=n;
            vector<string>board(n,string(n,'.'));
            solve(0,board);
            return result;     
        }
    };
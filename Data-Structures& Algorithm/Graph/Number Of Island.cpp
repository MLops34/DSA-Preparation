class Solution {
private:
    void bfs(int row, int col,vector<vector<int>>& visit,vector<vector<char>>& grid){
        visit[row][col]=1;
        queue<pair<int,int>>que;
        que.push({row,col});
        int m=grid.size();
        int n=grid[0].size();
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while(!que.empty()){
            int row=que.front().first;
            int col=que.front().second;
            que.pop();

            for (auto& dir : directions) {
                int nr = row + dir[0];
                int nc = col + dir[1];
                if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == '1' && !visit[nr][nc]) {
                    visit[nr][nc] = 1;
                    que.push({nr, nc});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> visit(m,vector<int>(n,0));
        int cnt=0;
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(!visit[row][col] && grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,visit,grid);
                    
                }
            }
        }
        return cnt;
    }
};
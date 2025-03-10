class Solution {
    public:
      vector<string>result;
      void solve(int i,int j,vector<vector<int>> &mat,string & path){
          if(i<0 || i>=mat.size() || j<0 || j>=mat.size() || mat[i][j]==0) return ;
          if(i==mat.size()-1 && j==mat.size()-1){
              result.push_back(path);
              return ;
          }
          
          mat[i][j]=0;
          path.push_back('L');
          solve(i,j-1,mat,path);
          path.pop_back();
          
          path.push_back('R');
          solve(i,j+1,mat,path);
          path.pop_back();
          
          path.push_back('U');
          solve(i-1,j,mat,path);
          path.pop_back();
          
          path.push_back('D');
          solve(i+1,j,mat,path);
          path.pop_back();
          mat[i][j]=1;
      }
      vector<string> findPath(vector<vector<int>> &mat) {
          // code here
          string path="";
          solve(0,0,mat,path);
          return result;
      }
  };
// Time Complexity --Accurate If rat had 3 option for n^2 cells So-O(3^(N^2))
// space Consumed is Depth of Stack tree--O(N^2);   
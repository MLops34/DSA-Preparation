class Solution {
    public:
      vector<vector<int>> res;
  
      void solve(vector<int> temp, Node* root) {
          if (root->left == NULL && root->right == NULL) {
              res.push_back(temp);
              return;
          }
      
          if (root->left != NULL) {
              temp.push_back(root->left->data);
              solve(temp, root->left);
              temp.pop_back();
          }
      
          if (root->right != NULL) {
              temp.push_back(root->right->data);
              solve(temp, root->right);
              temp.pop_back();
          }
      }
  
      vector<vector<int>> Paths(Node* root) {
          res.clear();
          if (root == NULL) return res;
      
          vector<int> temp;
          temp.push_back(root->data);
      
          solve(temp, root);
      
          return res;
      }
  
  };
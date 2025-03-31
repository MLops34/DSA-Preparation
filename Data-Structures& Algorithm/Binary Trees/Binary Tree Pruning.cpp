class Solution {
    public:
        TreeNode* solve(TreeNode* root) {
            if (root == NULL) {
                return NULL;
            }
    
            root->left = solve(root->left);
            root->right = solve(root->right);
    
            if (root->val == 0 && root->left == NULL && root->right == NULL) {
                return NULL;
            }
    
            return root;
        }
    
        TreeNode* pruneTree(TreeNode* root) {
            return solve(root);
        }
    };
      
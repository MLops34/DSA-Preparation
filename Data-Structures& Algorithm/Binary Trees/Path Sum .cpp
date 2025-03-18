class Solution {
    public: 
        bool check(TreeNode* root, int targetSum, int currentSum) {
            if (root == NULL) return false;
    
            currentSum += root->val;
    
            if (root->left == NULL && root->right == NULL) {
                return currentSum == targetSum;
            }
    
            bool left = check(root->left, targetSum, currentSum);
            bool right = check(root->right, targetSum, currentSum);
    
            return left || right;
        }
    
        bool hasPathSum(TreeNode* root, int targetSum) {
            return check(root, targetSum, 0);
        }
    };
    
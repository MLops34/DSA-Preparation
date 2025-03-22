class Solution {
    public:
        bool solve(TreeNode* p,TreeNode* q) {
            if(p==NULL || q==NULL) return p==q;
            return (p->val == q->val) && solve(p->left, q->right)&& solve(p->right, q->left);
            return true;
        }
        bool isSymmetric(TreeNode* root) {
            if(root==NULL) return true;
            return solve(root->left,root->right);        
        }
    };
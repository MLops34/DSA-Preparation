class Solution {
    public:
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            if(root==NULL) return NULL;
            if(root==p || root==q) return root;
            TreeNode * LeftN=lowestCommonAncestor(root->left,p,q);
            TreeNode * rightN=lowestCommonAncestor(root->right,p,q);
            if(LeftN!=NULL && rightN!=NULL) return root;
            if(LeftN==NULL) return rightN;
            return LeftN;
        }
    };
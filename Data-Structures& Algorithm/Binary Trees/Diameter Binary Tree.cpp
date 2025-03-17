/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
        int heightTree(TreeNode* root, int &maxi){
            if(root==NULL){
                return 0;}
            int l=heightTree(root->left,maxi);
            int r=heightTree(root->right,maxi);
            maxi=max(maxi,l+r);
            return (1 + max(r,l));
        }
        int diameterOfBinaryTree(TreeNode* root) {
            int maxi=0;
            heightTree(root,maxi);
            return maxi;
        }
    };
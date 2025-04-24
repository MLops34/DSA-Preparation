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
        int node=0;
        int cnt=0;
        int kthSmallest(TreeNode* root, int k) {
            solve(root,k);
            return node;
        }
        void solve(TreeNode * root,int k){
            if(root->left!=NULL){
                solve(root->left,k);
            }
            cnt++;
            if(cnt==k){
                node=root->val;
                return ;
            }
            if(root->right!=NULL){
                solve(root->right,k);
            }
        }
    };
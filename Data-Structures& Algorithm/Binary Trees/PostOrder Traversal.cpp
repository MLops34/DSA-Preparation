class Solution {
    public:
        void postOrder(vector<int>&arr,TreeNode* root){
            if(root==nullptr){
                return ;
            }
            postOrder(arr,root->left);
            postOrder(arr,root->right);
            arr.push_back(root->val);
        }
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int>arr;
            postOrder(arr,root);
            return arr;
        }
    };
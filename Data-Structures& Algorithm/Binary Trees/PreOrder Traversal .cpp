class Solution {
    public:
        void preOrder(vector<int>&arr,TreeNode* root){
            if(root==nullptr){
                return ;
            }
            arr.push_back(root->val);
            preOrder(arr,root->left);
            preOrder(arr,root->right);
        }
        vector<int> preorderTraversal(TreeNode* root) {
            vector<int>arr;
            preOrder(arr,root);
            return arr;
        }
    };
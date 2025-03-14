class Solution {
    public:
        void InOrder(vector<int>&arr,TreeNode* root){
            if(root==nullptr){
                return ;
            }
            InOrder(arr,root->left);
            arr.push_back(root->val);
            InOrder(arr,root->right);
        }
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int>arr;
            InOrder(arr,root);
            return arr;
            
        }
    };
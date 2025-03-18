
class Solution {
    public:
        int MaxSum(TreeNode* root,int &maxi){
            if(root==NULL){
                return 0;
            }
            int left=max(0,MaxSum(root->left,maxi));
            int right=max(0,MaxSum(root->right,maxi));
            maxi=max(maxi,root->val+left+right);
            return root->val+max(left,right);
        }
        int maxPathSum(TreeNode* root) {
            int maxi=INT_MIN;
            MaxSum(root,maxi);
            return maxi;
        }
    };
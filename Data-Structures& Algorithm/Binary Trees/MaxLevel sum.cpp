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
        int maxLevelSum(TreeNode* root) {
            if(root==NULL) return 0;
            queue<TreeNode*>que;
            que.push(root);
            int maxi=INT_MIN;
            int crntlevel=1;
            int maxlevel=1;
            while(que.empty()==false){
                int sum=0;
                int n=que.size();
                while(n--){
                    TreeNode * temp=que.front();
                    que.pop();
                    sum=sum+temp->val;
                    if(temp->left!=NULL){
                        que.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        que.push(temp->right);
                    }
                }
                if(sum>maxi){
                    maxi=sum;
                    maxlevel=crntlevel;
                }
                crntlevel++;
            }
            return maxlevel;
        }
    };
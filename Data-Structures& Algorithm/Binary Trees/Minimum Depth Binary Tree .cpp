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
        int minDepth(TreeNode* root) {
            if(root== NULL) return 0;
    
            queue<TreeNode*>que;
            int depth=1;
            que.push(root);
            while(!que.empty()){
                int n=que.size();
                while(n--){
                    TreeNode* temp=que.front();
                    que.pop();
                    if(temp->left==NULL && temp->right==NULL){
                        return depth;
                    }
                    if(temp->left!=NULL){
                        que.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        que.push(temp->right);
                    }
                }
                depth++;
            }
            return -1;
        }
    };

class Solution {
    public:
        int countNodes(TreeNode* root) {
            if(root==NULL) return 0;
            queue<TreeNode*>que;
            que.push(root);
            int cnt=0;
            while(que.empty()==false){
                int n=que.size();
                while(n--){
                    TreeNode* temp=que.front();
                    que.pop();
                    cnt++;
                    if(temp->left!=NULL){
                        que.push(temp->left);
                    }
                    if(temp->right!=NULL) {
                        que.push(temp->right);
                    }
                }
            }
            return cnt;
    
        }
    }; 
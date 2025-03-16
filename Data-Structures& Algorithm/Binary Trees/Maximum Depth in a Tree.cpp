class Solution {
    public:
        int maxDepth(TreeNode* root) {
            if(root==NULL) return 0;
            queue<TreeNode*>que;
            que.push(root);
            int depth=0;
            while(!que.empty()){
                int n=que.size();
                depth++;
                while(n--){
                    TreeNode * temp=que.front();
                    que.pop();
    
                    if(temp->right!=NULL){
                        que.push(temp->right);
                    }
                    if(temp->left!=NULL){
                        que.push(temp->left);
                    }
                    
                }
            }
            return depth;        
        }
    };
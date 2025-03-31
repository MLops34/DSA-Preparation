class Solution {
    public:
        bool isCompleteTree(TreeNode* root) {
            queue<TreeNode*>que;
            que.push(root);
            bool flag=false;
            while(!que.empty()){
                int n=que.size();
                while(n--){
                    TreeNode* temp=que.front();
                    que.pop();
                    if(temp==NULL){
                        flag=true;
                    }else{
                        if(flag==true){
                            return false;
                        }
                        que.push(temp->left);
                        que.push(->right);
                    }
                    
                }
            }
            return true;
        }
    };
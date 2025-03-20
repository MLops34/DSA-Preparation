
class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>>res;
            queue<TreeNode *>que;
            que.push(root);
            bool ChkR=false;
            if(root==NULL) return res;
            while(!que.empty()){
                int n=que.size();
                vector<int>level;
                while(n--){
                    TreeNode* temp=que.front();
                    que.pop();
                    level.push_back(temp->val);
                    if(temp->left!=NULL) que.push(temp->left);
                    if(temp->right!=NULL) que.push(temp->right);
                }
    
                if(ChkR) reverse(level.begin(),level.end());
                res.push_back(level);
                ChkR=!ChkR;
            }
            return res;
        }
    };
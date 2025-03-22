TIME-O(N) space-O(H)
class Solution {
    public:
        void solve(vector<int> &level,TreeNode* root,int depth){
            if(root==NULL) return ;
            if(depth==level.size()){
                level.push_back(root->val);
            }
            solve(level,root->left,depth+1); // left view left first and For right view Right first
            solve(level,root->right,depth+1);
            
        }
        vector<int> rightSideView(TreeNode* root) {
            vector<int> level;
            solve(level,root,0);
            return level;
        }
    };
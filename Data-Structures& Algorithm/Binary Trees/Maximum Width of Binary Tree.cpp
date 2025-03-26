/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     ll val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(ll x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(ll x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
        typedef unsigned long long ll;
        int widthOfBinaryTree(TreeNode* root) {
            queue<pair<TreeNode*,ll>>que;
            que.push({root,0});
            ll maxW=0;
            while(!que.empty()){
                ll n=que.size();
                ll L=que.front().second;
                ll R=que.back().second;
                maxW=max(maxW,R-L+1);
                while(n--){
                    TreeNode * tmp=que.front().first;
                    ll idx=que.front().second;
                    que.pop();
                    if(tmp->left!=NULL){
                        que.push({tmp->left,2*idx+1});
                    }
                    if(tmp->right!=NULL){
                        que.push({tmp->right,2*idx+2});
                    }
                }  
            }
            return maxW;        
        }
    };
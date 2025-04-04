class Solution {
    public:
        TreeNode* reverseOddLevels(TreeNode* root) {
            if (root == NULL) return root;
            
            queue<TreeNode*> que;
            que.push(root);
            int depth = 0;
            
            
            while (!que.empty()) {
                int n = que.size();
                vector<TreeNode*> currentLevel;
                
                
                for (int i = 0; i < n; ++i) {
                    TreeNode* node = que.front();
                    que.pop();
                    currentLevel.push_back(node);
                    
                    
                    if (node->left != NULL) que.push(node->left);
                    if (node->right != NULL) que.push(node->right);
                }
                
    
                if (depth % 2 == 1) {
                    int left = 0, right = currentLevel.size() - 1;
                    while (left < right) {
                        swap(currentLevel[left]->val, currentLevel[right]->val);
                        ++left;
                        --right;
                    }
                }
                
                ++depth;
            }
            
            return root;
        }
    };
    
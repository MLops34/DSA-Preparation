/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        queue<TreeNode*>que;
        que.push(root);
        string s="";
        while(!que.empty()){
            TreeNode* curr=que.front();
            que.pop();
            if(curr==NULL) s.append("#,");
            else{
                s.append(to_string(curr->val)+',');
            }
            if(curr!=NULL){
                que.push(curr->left);
                que.push(curr->right);
            }
        }
        return s;        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0) return NULL;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode *root=new TreeNode(stoi(str));
        queue<TreeNode*>que;
        que.push(root);
        while(que.empty()==false){
            TreeNode *node=que.front();
            que.pop();
            
            getline(s,str,',');
            if(str=="#"){
                node->left=NULL;
            }
            else{
                TreeNode * leftnode=new TreeNode(stoi(str));
                node->left=leftnode;
                que.push(leftnode);
            }
            getline(s,str,',');
            if(str=="#"){
                node->right=NULL;
            }
            else{
                TreeNode * rightnode=new TreeNode(stoi(str));
                node->right=rightnode;
                que.push(rightnode);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
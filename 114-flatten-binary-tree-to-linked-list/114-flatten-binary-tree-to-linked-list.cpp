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
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        stack<TreeNode*> st;
        
        st.push(root);
        while(!st.empty()) {
            TreeNode* cur=st.top();
            st.pop();
            
            if(cur->right) {
                st.push(cur->right);
            }
            if(cur->left) {
                st.push(cur->left);
            }
            if(!st.empty()) {
                cur->right=st.top();
            }
            cur->left=NULL;
        }
        
        
         
        
//         if(root==NULL||root->left==NULL||root->right==NULL)
//         {
//             return;
//         }
        
//         //stack<TreeNode*> st;
        
// //root->left->right
        

//             if(root->left!=NULL)
//             {
//                 flatten(root->left);

//                 TreeNode* tmp=root->right;
//                 root->right=root->left;
//                 root->left=NULL;
                
//                 TreeNode *t=root->right;
//                 while(t->right!=NULL)
//                 {
//                     t=t->right;
//                 }
//                 t->right=tmp;
                

//         }
//         flatten(root->right);
//         //preorder()
    }
};
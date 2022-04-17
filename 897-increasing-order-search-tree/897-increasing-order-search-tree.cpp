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
    void inorder(TreeNode* root,vector<int> &trav)
    {
        if(root==NULL)
            return;
        
        inorder(root->left,trav);
        trav.push_back(root->val);
        inorder(root->right,trav);        
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        vector<int>trav;
        inorder(root,trav);
        TreeNode *res=new TreeNode(0);
        TreeNode* cur=res;
        for(auto i: trav)
        {
            cur->right=new TreeNode(i);
            cur=cur->right;
        }
        return res->right;
    }
};
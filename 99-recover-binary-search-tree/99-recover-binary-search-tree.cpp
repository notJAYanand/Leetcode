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
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int i=0;
    void check(TreeNode* root,vector<int>&v)
    {
        
        if(root==NULL)return;
        check(root->left,v);
        if(v[i]!=root->val)
        {
            swap(v[i],root->val);
        }
        i++;
        check(root->right,v);
    }
    void recoverTree(TreeNode* root) {
        // if(root==NULL)return;
        vector<int>v;
        inorder(root,v);
        sort(v.begin(),v.end());
        check(root,v);
    }
};
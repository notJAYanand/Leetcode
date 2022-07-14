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
    int preorderIndex=0;
    map<int,int>mp;
    TreeNode* arrayToTree(vector<int>&preorder,int left,int right)
    {
        if(left>right) return NULL;
        
        int rootValue=preorder[preorderIndex++];
        TreeNode* root=new TreeNode(rootValue);
        
        root->left=arrayToTree(preorder,left,mp[rootValue]-1);
        root->right=arrayToTree(preorder,mp[rootValue]+1,right);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // int preorderIndex=0;
        
        // map<int,int>mp;
        
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        return arrayToTree(preorder,0,preorder.size()-1);
    }
};
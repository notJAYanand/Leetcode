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
    /*
        Input:
        [1,2,3,4,5]
        Output:                               WRONG!!!
        6
        Expected:
        4    
    */
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*>q;
        q.push(root);
        //BFS
        int sum=0;
        while(!q.empty())
        {
            int n= q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* cur=q.front();
                q.pop();
                
                if(cur->left)
                {
                    
                    if(!cur->left->left && !cur->left->right)
                    {
                        sum+=cur->left->val;
                    }
                    q.push(cur->left);
                }
                
                if(cur->right)
                {
                    q.push(cur->right);
                }
            }
        }
        return sum;       
    }
};
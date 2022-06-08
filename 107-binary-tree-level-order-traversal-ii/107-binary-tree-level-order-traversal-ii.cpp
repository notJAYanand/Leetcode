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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        // stack<vector<int>> st;
        queue<TreeNode*>q;
        vector<vector<int>> res;
        if(root==NULL) return res;
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* cur=q.front();
                q.pop();
                if(cur->left)
                {
                    q.push(cur->left);
                }
                if(cur->right)
                {
                    q.push(cur->right);
                }
                temp.push_back(cur->val);
            }
            // st.push(temp);
            res.push_back(temp);
        }
        // while(!st.empty())
        // {
        //     res.push_back(st.top());
        //     st.pop();
        // }
        reverse(res.begin(),res.end());
        return res;
    }
};
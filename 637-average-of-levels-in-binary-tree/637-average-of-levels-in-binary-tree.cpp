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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(root==NULL) return res;
        queue<TreeNode*>q;
        q.push(root);
        //BFS
        while(!q.empty())
        {
            vector<int> temp;
            int n= q.size();
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
            double avg=0;
            for(int i=0;i<temp.size();i++)
            {
                avg+=temp[i];
            }
            avg=avg/temp.size();
            res.push_back(avg);
        }
        return res;
    }
};
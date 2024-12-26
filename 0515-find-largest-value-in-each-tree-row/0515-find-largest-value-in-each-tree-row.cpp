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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        
        if(root==nullptr)   return res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int size=q.size();
            int curMax=INT_MIN;
            
            for(int i=0;i<size;i++) {
                TreeNode* node=q.front();
                q.pop();
                
                curMax=max(curMax,node->val);

                if(node->left!=nullptr) q.push(node->left);
                if(node->right!=nullptr) q.push(node->right);                
            }
            res.push_back(curMax);
        }
        return res;
    }
};
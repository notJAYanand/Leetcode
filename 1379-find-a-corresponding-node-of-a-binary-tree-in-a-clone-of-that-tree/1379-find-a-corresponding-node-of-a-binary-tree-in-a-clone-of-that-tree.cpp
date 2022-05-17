/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    //pre order traversal
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned== NULL)
            return NULL;
        if(cloned->val == target->val)  //Node found
            ans = cloned;
        
        //check in the left
        getTargetCopy(original, cloned->left, target);
        //check in the right
        getTargetCopy(original, cloned->right, target);
        
        
        return ans;
    }
};
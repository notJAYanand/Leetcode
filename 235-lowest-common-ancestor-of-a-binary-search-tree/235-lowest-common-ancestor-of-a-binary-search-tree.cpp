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
//     O(n)
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==NULL|| root==p|| root==q) return root;
        
//         TreeNode* left=lowestCommonAncestor(root->left,p,q);
//         TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
//         if(left==NULL) return right;
//         else if(right==NULL) return left;
//         else return root;
//     }
    //O(n)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            TreeNode *current = root;
            while(current != NULL)
            {
                if( (p->val < current->val) && (q->val < current->val) )
                    current = current-> left;
                else  if( (p->val > current->val) && (q->val > current->val) )
                    current = current-> right;
                else return current;
            }
            return root;
        }
};
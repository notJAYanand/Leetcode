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
    
    TreeNode* buildUtil(vector<int>& in, vector<int>& post, int inStrt, int inEnd, int* pIndex) {
        if (inStrt > inEnd)
                return NULL;

            TreeNode* node = new TreeNode(post[*pIndex]);
            (*pIndex)--;


            if (inStrt == inEnd)
                return node;

            int iIndex = search(in, inStrt, inEnd, node->val);
        
            node->right = buildUtil(in, post, iIndex + 1, inEnd, pIndex);
            node->left = buildUtil(in, post, inStrt, iIndex - 1, pIndex);

            return node;        
    }
    
    int search(vector<int>& arr, int strt, int end, int value) {
        int i;
        for (i = strt; i <= end; i++) {
            if (arr[i] == value)
                break;
        }
        return i;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int pIndex = n - 1;
        return buildUtil(inorder, postorder, 0, n - 1, &pIndex);

    }
};
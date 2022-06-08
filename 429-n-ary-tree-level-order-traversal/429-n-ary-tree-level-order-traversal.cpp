/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* cur=q.front();
                q.pop();
                for(int i=0;i<cur->children.size();i++)
                {
                    q.push(cur->children[i]);
                }
                temp.push_back(cur->val);
            }
            res.push_back(temp);
        }
        
        return res;
    }
};
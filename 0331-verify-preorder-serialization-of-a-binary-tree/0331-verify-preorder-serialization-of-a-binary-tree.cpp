class Solution {
public:
    bool isValidSerialization(string preorder) {
        vector<string> nodes;
        
        for(int i=0;i<preorder.size();i++) {
            // if(preorder[i]!=',') nodes.push_back(preorder[i]);
            string temp="";
            while(preorder[i]!=',' && i<preorder.size()) {
                temp+=preorder[i];
                i++;
            }
            nodes.push_back(temp);
        }
        cout<<nodes.size()<<endl;
        // diff= no.of child(outdegree) - no. of parent(indegree) at the end, for a valid tree cumulated diff should be zero.
        int diff=1; // for root, 2-1=1
        
        for(auto node : nodes) {
            diff--; //because every node has a parent
            if(diff<0) return false;
            if(node!="#") diff+=2; // node has 2 children if its not null
        }
        
        return diff==0;
        
    }
};
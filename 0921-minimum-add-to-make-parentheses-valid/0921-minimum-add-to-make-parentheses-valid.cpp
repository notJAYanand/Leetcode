class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char> stack;
        int stackSize=0;
        int nAdd=0;
        for(auto i: s) {
            if(i=='(') {
                // stack.push(i);
                stackSize++;
            }
            else if(i==')'){
                // if(stack.empty()) {
                if(stackSize==0) {
                    nAdd++;
                }
                else {
                    // stack.pop();
                    stackSize--;
                }
            }
        }
        // return nAdd+stack.size();
        return nAdd+stackSize;
    }
};
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stack;
        int nAdd=0;
        for(auto i: s) {
            if(i=='(') {
                stack.push(i);
            }
            else if(i==')'){
                if(stack.empty()) {
                    nAdd++;
                }
                else {
                    stack.pop();
                }
            }
        }
        return nAdd+stack.size();
    }
};
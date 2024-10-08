class Solution {
public:
    int minSwaps(string s) {
        // stack<char> stack;
        int nUnbalancedBraces=0;

        // for(auto i: s) {
        //     if(i=='[') {
        //         stack.push(i);
        //     }
        //     else if(i==']') {
        //         if(stack.empty()) {
        //             nUnbalancedBraces++;
        //         }
        //         else {
        //             stack.pop();
        //         }
        //     }
        // }
        // return (nUnbalancedBraces+1)/2;
        int stackSize=0;
        for(auto i: s) {
            if(i=='[') {
                stackSize++;
            }
            else if(i==']') {
                if(stackSize==0) {
                    nUnbalancedBraces++;
                }
                else {
                    stackSize--;
                }
            }
        }
        return (nUnbalancedBraces+1)/2;
}
    
};
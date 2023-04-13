class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // time O(n) spaceO(1)
        //using vector as a stack
        int i=0,j=0;
        for(auto k: pushed)
        {
            pushed[i]=k;
            i++;
            while(i>0 && pushed[i-1]== popped[j])
            {
                i--;
                j++;
            }
            
        }
        return i==0;

    // timeO(n) spaceO(n)
//         stack<int> st;
//         int j=0;
//         for(int i=0;i<pushed.size();i++)
//         {
//             st.push(pushed[i]);
//             while(!st.empty() && st.top()==popped[j])
//             {
//                 st.pop();
//                 j++;
//             }
//         }
        
        
//         return st.empty();
    }
};
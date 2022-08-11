class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char> st;
        st.push('x');
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);  
            }
            
            else if(s[i]==')' && st.top()=='(' || s[i]==']' && st.top()=='[' || s[i]=='}' && st.top()=='{')
            {
                st.pop();
            }
            else
                return false;
            
        }
        st.pop();
        if(st.empty()) return true;
        
        return false;
    }
};
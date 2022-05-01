class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1,st2;
        int n=s.size();
        int m=t.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='#' && st1.empty())
            {
                continue;
            }            
            if(s[i]=='#')
            {
                st1.pop();
            }
            else
            {
                st1.push(s[i]);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(t[i]=='#' && st2.empty())
            {
                continue;
            }            
            if(t[i]=='#')
            {
                st2.pop();
            }
            else
            {
                st2.push(t[i]);
            }
        }
        
        string s1="",t1="";
        while(!st1.empty())
        {
            s1+=st1.top();
            st1.pop();
        }
        while(!st2.empty())
        {
            t1+=st2.top();
            st2.pop();
        }
        return s1==t1;
    }
};
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        //codeleet
        //45670123
        int n=s.length();
        string res;
        for(int i=0;i<n;i++)
        {
            res.push_back('$');
        }
        for(int i=0;i<n;i++)
        {
            res[indices[i]]=s[i];
        }
        return res;
    }
};
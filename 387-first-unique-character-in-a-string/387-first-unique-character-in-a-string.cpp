class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        
        for(char &i : s)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            cout<<i.first<<i.second<<endl;
        }
        char res;
        for(auto i: s)
        {
            if(mp[i]==1)
            {
                res=i;
                break;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==res)
                return i;
        }
        return -1;
    }
};
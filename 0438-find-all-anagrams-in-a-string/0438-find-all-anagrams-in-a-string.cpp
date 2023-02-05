class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        
        vector<int> v;
        if(p.size()>s.size())
        {
            return v;
        }
        
        for(int i=0;i<p.size();i++)
        {
            mp1[p[i]]++;
            mp2[s[i]]++;
            
        }
        if(mp1==mp2)
        {
            v.push_back(0);
        }
        for(int i=p.size();i<s.size();i++)
        {
            mp2[s[i]]++;
            mp2[s[i-p.size()]]--;
            if(mp2[s[i-p.size()]]<=0)
            {
                mp2.erase(s[i-p.size()]);
            }
            if(mp1==mp2)
            {
                v.push_back(i-p.size()+1);
            }
        }
                
        return v;
    }
};
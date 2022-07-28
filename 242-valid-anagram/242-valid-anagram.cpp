class Solution {
public:
    bool isAnagram(string s, string t) {
//         map<char,int> mp1,mp2;
//         if(s.size()!=t.size())
//             return false;
//         for(int i=0;i<t.size();i++)
//         {
//             mp1[s[i]]++;
//             mp2[t[i]]++;
//         }
//         if(mp1==mp2)
//             return true;
        
//         return false;

        if(s.length()!=t.length())
        {
            return false;
        }
        int count[26]={0};
        //={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        // memset(count,0,sizeof(count));
        for(int i=0;i<s.length();i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
               {
                    return false;
               }
            
               
        }

            return true;

        
    }
};
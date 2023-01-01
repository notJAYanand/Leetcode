class Solution {
public:
    // int countSpaces(string s)
    // {
    //     int count=0;
    //     for(int i=0;i<s.size();i++)
    //     {
    //         if(s[i]==' ') count++;
    //     }
    //     return count;
    // }
    bool wordPattern(string pattern, string str) {
//         vector<string> v;
//         string temp="";
//         for(int i=0;i<s.size();i++)
//         {
//             temp+=s[i];
//             if(s[i]==' ')
//             {
//                 v.push_back(temp);
//                 temp="";
//             }
//         }
//         v.push_back(temp);
//         if(pattern.size()!=v.size())
//         {
//             return false;
//         }        
//         unordered_map<char,string> m1;
//         unordered_map<string,char> m2;
        
//         for(int i=0;i<pattern.length();i++)
//         {
//             if(m1.find(pattern[i])!=m1.end())
//             {
//                 if(pattern[i]!=m2[v[i]])
//                 {
//                     return false;
//                 }
//             }
//             else
//             {
//                 if(m2.find(v[i])!=m2.end())
//                 {
//                     return false;
//                 }
//             }
               
//             m1[pattern[i]]=v[i];
//             m2[v[i]]=pattern[i];
               
               
//         }
//         return true;
        vector<int> pat_map (26, 0);
        unordered_map<string,int> str_map;
        int i=0, n = pattern.size();
        istringstream ss (str);
        string token;
        
        for(string token; ss >> token; ++i) {
            if(i == n || pat_map[pattern[i]-'a'] != str_map[token]) return false;
            
            // 1-based indexing since map assigns 0 as a default value for keys not found.
            pat_map[pattern[i]-'a'] = str_map[token] = i+1;
        }
        
        return i == n;
    }
};
class Solution {
public:
    bool DP_helper(unordered_map<string, bool> &isScramblePair, string s1, string s2)
        {
            int i,len = s1.size();
            bool res = false;
            if(0==len) return true;
            else if(1==len) return s1 == s2;
            else
            {
                if(isScramblePair.count(s1+s2)) return isScramblePair[s1+s2]; // checked before, return intermediate result directly
                if(s1==s2) res=true;
                else{
                    for(i=1; i<len && !res; ++i)
                    {
//check s1[0..i-1] with s2[0..i-1] and s1[i..len-1] and s2[i..len-1]
                        res = res || (DP_helper(isScramblePair, s1.substr(0,i), s2.substr(0,i)) && DP_helper(isScramblePair, s1.substr(i,len-i), s2.substr(i,len-i)));
 //if no match, then check s1[0..i-1] with s2[len-k.. len-1] and s1[i..len-1] and s2[0..len-i]
                       res = res || (DP_helper(isScramblePair, s1.substr(0,i), s2.substr(len-i,i)) && DP_helper(isScramblePair, s1.substr(i,len-i), s2.substr(0,len-i)));
                    }
                }
                return isScramblePair[s1+s2]= res; //save the intermediate results
                
            }
        }
    public:
        bool isScramble(string s1, string s2) {
           unordered_map<string, bool> isScramblePair;
           return DP_helper(isScramblePair, s1, s2);
        }
//     bool isScramble(string s1, string s2) {
//         if(s1==s2)
//             return true;
            
//         int len = s1.length();
//         int count[26] = {0};
//         for(int i=0; i<len; i++)
//         {
//             count[s1[i]-'a']++;
//             count[s2[i]-'a']--;
//         }
        
//         for(int i=0; i<26; i++)
//         {
//             if(count[i]!=0)
//                 return false;
//         }
        
//         for(int i=1; i<=len-1; i++)
//         {
//             if( isScramble(s1.substr(0,i), s2.substr(0,i)) && isScramble(s1.substr(i), s2.substr(i)))
//                 return true;
//             if( isScramble(s1.substr(0,i), s2.substr(len-i)) && isScramble(s1.substr(i), s2.substr(0,len-i)))
//                 return true;
//         }
//         return false;
//     }
};
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26)
            return false;
        
        vector<int>count(26,0);
        int j=0;
        for(char i:sentence) {
            count[i-'a']++;
            // cout<<count[j];
            
        }
        for(auto i:count) {
            if(i<1) return false;
        }
        return true;
//         unordered_map<char,int> mp;
//         for(int i=0;i<sentence.length();i++)
//         {
//             mp[sentence[i]]++;
//         }
        
//         char x='a';
//         while(x<='z')
//         {
//             if(mp.count(x)>0)
//                 x++;
//             else
//                 return false;
//         }
//         return true;
    }
};
class Solution {
public:
    
    string countAndSay(int n) {
        if (n == 0) return "";
        string res = "1";
        while (--n) {
            string cur = "";
            for (int i = 0; i < res.size(); i++) {
                int count = 1;
                 while ((i + 1 < res.size()) && (res[i] == res[i + 1])){
                    count++;    
                    i++;
                }
                cur += to_string(count) + res[i];
            }
            res = cur;
        }
        return res;        
        // unordered_map<char,int>mp;
        // string no =""; 
        // no+=to_string(n);
        // int i=0;
        // while(i<no.size())
        // {
        //     mp[no[i]]++;
        //     i++;
        // }
        // string res;
        // for(auto i: mp)
        // {
        //     res+=to_string(i.second);
        //     res+=i.first;
        // }
        // return res;
    }
};
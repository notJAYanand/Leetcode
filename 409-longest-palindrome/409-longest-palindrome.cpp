class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        
        for(auto i: s)
        {
            mp[i]++;
        }
        int res=0;
        for(auto i:mp)
        {
            res+=i.second/2*2;
            if(res%2==0 && i.second % 2 ==1)
            {
                res++;
            }
        }
        return res;
    }
};
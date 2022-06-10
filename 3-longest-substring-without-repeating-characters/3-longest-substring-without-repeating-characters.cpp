class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n=s.length();
        int l=0,r=0,res=0;
        while(r<n)
        {
            char right=s[r];
            mp[right]++;
            
            while(mp[right]>1)
            {
                char left=s[l];
                mp[left]--;
                l++;
            }
            r++;
            res=max(res,r-l);
            
        }
        return res;
    }
};
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int m=ransomNote.size();
        int n=magazine.size();
        // if(m>n)
        // {
        //     return false;
        // }
        unordered_map<char,int> mp;
        for(auto i: magazine) {
            mp[i]++;
        }
        for(auto i: ransomNote) {
            mp[i]--;
            if(mp[i]<0) return false;
        }
        return true;
    }
};
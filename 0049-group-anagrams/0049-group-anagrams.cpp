class Solution {
public:    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        int n=strs.size();
        vector<vector<string>> res;
        
        for(int i=0;i<n;i++) {
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(s);
        }
        
        for(auto i: mp) {
            res.push_back(i.second);
        }
        
        return res;
    }
};
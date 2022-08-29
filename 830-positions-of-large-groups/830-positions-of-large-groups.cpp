class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> res;
        int n=s.size();
        // int count=0;
        int j=0;
        for(int i=0;i<n;i++) {
            // count++;
            if(i==n-1 || s[i]!=s[i+1]) {
                if(i-j+1>=3) {
                    res.push_back({j,i});
                }
                j=i+1;
            }
            
        }
        return res;
    }
};
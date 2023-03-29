class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        
        int cumulativeSum = 0; // From back
        
        int ans = 0;
        int cur = 0;
        for(int i = n-1;i>=0;i--) {
            cur += cumulativeSum + satisfaction[i];
            cumulativeSum += satisfaction[i];
            
            ans = max(ans,cur);
        }
        
        return ans;
    }
};
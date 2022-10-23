class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        int n= nums.size();
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        // int n=nums.size();
        int idealSum=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n;i++) {
            sum+=nums[i];
        }
        
        for(auto i:mp) {
            if(i.second>1) {
                res.push_back(i.first);
                res.push_back(abs(sum-idealSum-i.first));
                break;
            }
        }
        return res;
    }
};
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        vector<int>res;
        // unordered_map<int,int>mp;
        unordered_set<int>mp;
        int n=nums.size();

        for(auto i: nums)
        {
            // mp[i]++;
            mp.insert(i);
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(i+1)==mp.end())
            {
                res.push_back(i+1);
            }
        }
        

        return res;
    }
};
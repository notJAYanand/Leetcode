class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>res;
        for(auto i: nums)
        {
            mp[i]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(i+1)==mp.end())
            {
                res.push_back(i+1);
            }
        }
        
        //1 2 2 3 3 4  7 8 
        // for(int i=0;i<8;i++)
        // {
        //     if(nums[i]!=i+1)
        //     {
        //         res.push_back(i+1);
        //     }
        // }
        return res;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1; j<nums.size(); j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     ans.push_back(i);
//                     ans.push_back(j);
                        
//                 }
//             }
//         }
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<n;i++)
        {
                if(mp[target-nums[i]]>i)
            {
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                
                
            }
        }
        return ans;
    }
    
};
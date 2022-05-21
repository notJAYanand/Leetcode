class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> res;
        sort(nums.begin(),nums.end());
        int i,j,k;
        int n=nums.size();
        if(n<3)
        {
            return {};
        }
        for(int i=0;i<n-2;i++)
        {
            // if(i>0 && nums[i]==nums[i-1] )
            // {
            //     continue;
            // }
            j=i+1;
            k=n-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    // res.push_back({nums[i],nums[j],nums[k]});
                    if(i!=k)
                    {
                        if(res.find({nums[i],nums[j],nums[k]})==res.end())
                            res.insert({nums[i],nums[j],nums[k]});
                    }                    
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i: res)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
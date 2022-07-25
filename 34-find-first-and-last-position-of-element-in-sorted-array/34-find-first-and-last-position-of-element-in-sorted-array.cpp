class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        vector<int> res={-1,-1};
        if(nums.empty())
        {
            return res;
        }
        
        // int mid=(l+r)/2;
        // if(target<nums[mid])
        // {
        //     r=mid;
        // }
        // if(target>nums[mid])
        // {
        //     l=mid;
        // }
        
        while(l<=r)
        {
            if(nums[l]==target||nums[r]==target)
            {
                res[0]=l;
                res[1]=r;
                if(nums[r]==nums[l])
                {
                    return res;
                }                
                
            }
            if(nums[l]<target)
                l++;            

            if(nums[r]>target)
                r--;
        }
        return res;
    }
};
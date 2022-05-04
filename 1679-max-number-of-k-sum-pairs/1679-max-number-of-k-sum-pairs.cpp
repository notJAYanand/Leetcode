class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // time O(n) space O(n)
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int dif=k-nums[i];
            if(mp[dif]>0)
            {
                count++;
                mp[dif]--;
            }
            else
            {
                mp[nums[i]]++;
            }
        }
        //FOLLOWING:- SPACE O(1) TIME O(nlogn)
        // int l=0; 
        // int r=nums.size()-1;
        // sort(nums.begin(),nums.end());
        // while(l<r)
        // {
        //     if(nums[l]+nums[r]>k)
        //     {
        //         r--;
        //     }
        //     else if(nums[l]+nums[r]<k)
        //     {
        //         l++;
        //     }
        //     else if(nums[l]+nums[r]==k)
        //     {
        //         count++;
        //         l++;
        //         r--;
        //     }
        // }
       return count; 
    }
};
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // unordered_map<int,int> mp;
        int count=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==k)
//                 {
//                     count++;
//                     nums[i]=-1;
//                     nums[j]=-1;
//                 }
                
//             }
//         }
        int l=0; 
        int r=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<r)
        {
            if(nums[l]+nums[r]>k)
            {
                r--;
            }
            else if(nums[l]+nums[r]<k)
            {
                l++;
            }
            else if(nums[l]+nums[r]==k)
            {
                count++;
                l++;
                r--;
                // nums[l]=INT_MIN;
                // nums[r]=INT_MIN;
                // nums.erase(l);
                // nums.erase(r);
                
                // l=0;
                // r=nums.size()-1;
                // sort(nums.begin(),nums.end());
            }
        }
       return count; 
    }
};
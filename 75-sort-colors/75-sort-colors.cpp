class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        int lo=0,mid=0,hi=n-1;
        for(int i=0;i<n;i++)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[lo]);
                mid++;
                lo++;
            }
             else if(nums[mid]==2)
            {
                swap(nums[mid],nums[hi]);
                hi--;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
        }
    }
};
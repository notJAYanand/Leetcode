class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int end=-1;
        int max=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(max>nums[i])
            {
                end=i;
            }
            else
                max=nums[i];
        }
        int start=0; 
        int min=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(min<nums[i])
            {
                start=i;
                
            }
            else
                min=nums[i];
        }
        int res= end-start+1;
        return res;
    }
};
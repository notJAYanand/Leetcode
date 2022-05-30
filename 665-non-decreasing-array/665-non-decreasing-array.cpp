class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        vector <int> check=nums;
        sort(check.begin(),check.end());
        int count=0;
        for(int i=0;i<nums.size()-1 && count<2;i++)
        {
            if(nums[i] <= nums[i + 1])
            {
                continue;
            }
            else
            {
                count++;
                if(i>0 && nums[i+1]<nums[i-1])
                {
                    nums[i+1]=nums[i];
                }
                
            }

        }
        return count<2;
    }
};
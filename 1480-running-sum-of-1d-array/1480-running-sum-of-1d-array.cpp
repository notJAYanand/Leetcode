class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res(nums.size());
        int sum=0;
        int i=0;
        while(i<nums.size())
        { 
            sum=sum+nums[i];
            res[i]=sum;
            i++;
        }
        return res;
    }
};
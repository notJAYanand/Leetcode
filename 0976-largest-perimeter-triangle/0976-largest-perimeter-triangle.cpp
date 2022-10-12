class Solution {
public:
    
    // bool checkValidity(int a, int b, int c) {
    // // check condition
    //     if (a + b <= c || a + c <= b || b + c <= a)
    //         return false;
    //     else
    //         return true;
    // }
    
    
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        // int maxPerimeter=0;
        for(int i=n-1;i>=2;i--) {
            // if(!checkValidity(nums[i-2],nums[i-1],nums[i])) continue;
            
            // else {
            //     maxPerimeter=max(maxPerimeter,(nums[i-2]+nums[i-1]+nums[i]));
            // }
            if(nums[i]<nums[i-2]+nums[i-1]) {
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return 0;
    }
};
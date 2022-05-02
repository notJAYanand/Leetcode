class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        //SIGMA MALE TECHNIQUE
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]%2>nums[j]%2)
            {
                swap(nums[i],nums[j]);
            }
            if(nums[i]%2==0)
                i++;
            if(nums[j]%2!=0)
                j--;
        }
        return nums;
        
        // PUSSY TECHNIQUE
//         vector<int> res;
//         int n= nums.size();
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]%2==0)
//             {
//                 res.push_back(nums[i]);
//             }
            
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]%2!=0)
//             {
//                 res.push_back(nums[i]);
//             }

//         }
//         return res;
    }
};
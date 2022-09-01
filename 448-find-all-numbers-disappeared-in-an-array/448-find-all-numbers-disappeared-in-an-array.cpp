class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++) {
            int m=abs(nums[i])-1; // to convert into 0 index
            if(nums[m]>0) {
                nums[m]=-(nums[m]);
            }
            else {
                nums[m]=nums[m];
            }
        }
        for(int i=0;i<nums.size();i++) {
            if(nums[i]>0) res.push_back(i+1);
        }
        return res;
        
//         vector<int>res;
//         // unordered_map<int,int>mp;
//         unordered_set<int>mp;
//         int n=nums.size();

//         for(auto i: nums)
//         {
//             // mp[i]++;
//             mp.insert(i);
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(mp.find(i+1)==mp.end())
//             {
//                 res.push_back(i+1);
//             }
//         }
        

//         return res;
    }
};
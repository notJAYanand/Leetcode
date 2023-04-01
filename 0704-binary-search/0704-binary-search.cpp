class Solution {
public:
//     int binarySearch(vector<int>& v,int x,int l,int h)
//     {
//         if(h>=1)
//         {
//             int mid=l+(h-1)/2;
        
//             if(v[mid]==x)
//             {
//                 return mid;
//             }
//             if(v[mid]>x)
//             {
//                 return binarySearch(v,x,l,mid-1);
//             }
//             return binarySearch(v,x,mid+1,h);
//         }
//         return -1;
//     }
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        // return binarySearch(nums,target,low,high);
        
//         while(low<high)
//         {
            // int mid=(low+high)/2;
//             if(target<nums[mid])
//             {
//                 high=mid;
//             }
//             // if(target>=nums[mid])
//             // {
//             //     low=mid;
//             // }
//             else
//             {
//                 low=mid;
//             }
//             return high;
        
//         }
        int mid=(low+high)/2;
        if(target<nums[mid])
        {
            high=mid-1;
        }
        else if(target>nums[mid])
        {
            low=mid+1;
        }
        for(int i=low;i<=high;i++)
        {
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
};
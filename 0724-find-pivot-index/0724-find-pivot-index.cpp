class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //T O(N) S O(1)
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
        }
        int leftsum=0;
        int rightsum=sum;
        for(int i=0;i<n;i++)
        {
            rightsum-=nums[i];
            if(leftsum==rightsum)
            {
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
        //in below method 2 arrays are created O(N)
//         int prefixL[n];
//         prefixL[0]=nums[0];
//         for(int i=1;i<n;i++)
//         {
//             prefixL[i]= nums[i]+prefixL[i-1];
            
//         }
//         int prefixR[n];
//         prefixR[n-1]=nums[n-1];
//         for(int i=n-2;i>=0;i--)
//         {
//             prefixR[i]=nums[i]+prefixR[i+1];
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(prefixL[i]==prefixR[i])
//             {
//                 return i;
//             }
            
//         }
//         return -1;
    }
};
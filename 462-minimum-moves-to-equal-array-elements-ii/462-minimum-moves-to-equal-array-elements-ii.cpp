class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int moves=0;
        
        int mid=n/2;
        for(int i=0;i<n/2;i++)
        {
            moves+=(nums[mid]-nums[i]);
        }
        for(int i=n/2;i<n;i++)
        {
            moves+=(nums[i]-nums[mid]);
        }
        
        return moves;
    }
};
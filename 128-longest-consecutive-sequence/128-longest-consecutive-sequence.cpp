class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end()); // set<-vector_content

        int longest=0;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)!=s.end())
            {
                continue;
            }
            else
            {
                int count=0;
                int current=nums[i];
                while(s.find(current)!=s.end())
                {
                    count++;
                    current++;
                }
                longest=max(count,longest);
            }
        }
        return longest;
    }
};
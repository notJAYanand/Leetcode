class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> res;
        int n=nums.size();
        if(n==0)
        {
            return res;
        }
        int p=nums[0];
        for(int i=0;i<n;i++)
        {
            if(i==n-1 || nums[i]+1!=nums[i+1])
            {
                if(nums[i]!=p)
                    res.push_back(to_string(p)+"->"+to_string(nums[i]));
                else
                    res.push_back(to_string(p));
                
                if(i!=n-1)
                    p=nums[i+1];
            }
            
        }
        return res;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int c1[1001]={0},c2[1001]={0};
        vector<int> res;
        for(int i=0;i<nums1.size();i++)
        {
            c1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            c2[nums2[i]]++;
        }
        
        for(int  i=0;i<1001;i++)
        {
            if(c1[i]>0 && c2[i]>0)
            {
                res.push_back(i);
            }
        }
        return res;
    }
};
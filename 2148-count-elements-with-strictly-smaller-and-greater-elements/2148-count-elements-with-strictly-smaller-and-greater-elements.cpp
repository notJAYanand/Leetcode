class Solution {
public:

    int countElements(vector<int>& nums) {
        int count=0;
        // sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        // int m=s.size();
        vector<int> v;
        for(auto i: mp)
        {
            v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<v.size()-1;i++)
        {
            count+=mp[v[i]];
        }
        return count;
    }
};
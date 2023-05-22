class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == nums.size()) 
        {
            return nums;
        }        
        map<int,int>mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
        auto comp = [&mp](int n1, int n2) {return mp[n1] > mp[n2];};
        priority_queue<int,vector<int>,decltype(comp)> pq(comp);
        for(pair<int,int>p : mp)
        {
            pq.push(p.first);
            if(pq.size()>k)
                pq.pop();
        }
        vector<int>res(k);
        for(int i=k-1;i>=0;i--)
        {
            res[i]=pq.top();
            pq.pop();
        }
        return res;
    }
};
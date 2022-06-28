class Solution {
public:
    int minDeletions(string s) {
        // unordered_map<char,int> mp;
        // for(auto i:s)
        // {
        //     mp[i]++;
        // }
        vector<int> freq(26,0);
        for(auto i : s)
        {
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());//reverse sort
        int count=0;
        int maxFreq=s.size();
        for(int i=0;i<26 && freq[i]>0;i++)
        {
            if(freq[i]>maxFreq)
            {
                count+=freq[i]-maxFreq;
                freq[i]=maxFreq;
            }
            maxFreq=max(0,freq[i]-1);
        }

        return count;
    }
};
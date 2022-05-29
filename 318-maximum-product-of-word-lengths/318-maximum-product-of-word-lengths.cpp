class Solution {
public:
    bool checkCommon(vector<bool>&a,vector<bool>&b)
    {
        for(int i=0;i<26;i++)
        {
            if(a[i] && b[i])
            {
                return true;
            }
        }
        return false;
    }
        
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<vector<bool>>chars (n,vector<bool>(26));
        int res=0;
        
        for(int i=0;i<n;i++)
        {
            for(auto c: words[i])
            {
                chars[i][c-'a']=true;
            }
            for(int j=0;j<i;j++)
            {
                if(!checkCommon(chars[i],chars[j]))
                {
                    res=max(res,(int)words[i].size()*(int)words[j].size());
                }
            }
                   
        }
        return res;
    }
};
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++)
        {
            count[s[i]-97]++;
        }
        int res=0;
        bool flag= true;
        while(flag)
        {
            for(int i=0;i<target.size();i++)
            {
                if(count[target[i]-97]==0)
                {
                    flag=false;
                    break;
                }
                else
                {
                    count[target[i]-97]--;
                }
                
            }
            if(flag==true)
            {
                res++;
            }
                
        }
        return res;
    }
};
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(26,0);
        vector<int>temp;
        int n=words.size();
        int res=0;
        for(int i=0;i<chars.length();i++)
        {
            count[chars[i]-97]++;
        }
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            temp=count;
            for(int j=0;j<words[i].size();j++)
            {
                if(temp[words[i][j]-97]==0)
                {
                    flag=false;
                    break;
                }
                else
                {
                    temp[words[i][j]-97]--;
                    flag=true;
                }

            }
            if(flag==true)
            {
                res+=words[i].size();  
            }            
            
        }
        return res;
    }
};
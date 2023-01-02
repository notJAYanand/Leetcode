class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ans=false;
        
        if(word.length()==1)
        {
            if(word[0]>='A' && word[0]<='Z')
                return true;
            else if(word[0]>='a' && word[0]<='z')
                return true;
        }
        for(int i=1;i<word.length();i++)
        {
            if((isupper(word[1]) != isupper(word[i])) || (islower(word[0]) && isupper(word[i])))
            {
                return false;
            }
            
            
        }
        return true;
    }
};
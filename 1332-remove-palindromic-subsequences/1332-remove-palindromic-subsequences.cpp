class Solution {
public:
    bool isPalindrome(string s)
    {
        if(s.length()==1) return true;
        for(int i=0;i<s.length()/2;i++)
        {
            if(s[i]!=s[s.length()-1-i])
            {
                return false;
            }
        }
        return true;
    }   
    
    int removePalindromeSub(string s) {
        if(isPalindrome(s)) return 1;
        return 2;
    }
};
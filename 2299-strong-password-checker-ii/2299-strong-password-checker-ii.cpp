class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n=password.size();
        if(n<8) return false;
        
        int countL=0,countU=0,countD=0,countS=0;
        for(int i=0;i<n;i++)
        {
            if(i>0 && password[i-1]==password[i])
            {
                return false;
            }
            if(password[i]>='a' && password[i]<='z') {
                countL++;
            }
            if(password[i]>='A' && password[i]<='Z') {
                countU++;
            }
            if(password[i]>='0' && password[i]<='9') {
                countD++;
            }   
        }
        countS=n-(countL+countD+countU);
        
        if(countS==0||countD==0||countU==0||countL==0) {
            return false;
        }
        return true;
        
    }
};
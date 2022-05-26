class Solution {
public:
    int addDigits(int n) {
        int sum=0;       
        while(n!=0)
        {
            int d = (n%10); //digit
            // sum+=(n%10)*(n%10);
            n=n/10;
            sum+=d*d;
        }
        return sum;
            
    }
    
    bool isHappy(int n) {
        int slow= n;
        int fast= addDigits(n);
        while(fast!=1 && slow!=fast)
        {
            slow=addDigits(slow);
            fast=addDigits(addDigits(fast));
        }
        return fast==1;
        //O(log n)
    
    }
};
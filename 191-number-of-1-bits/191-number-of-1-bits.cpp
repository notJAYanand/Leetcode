class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        /*
        while(n)
        {
            count++;
            n=n&(n-1);
            
        }
        */
        while(n>0)
        {
            if(n%2!=0)
            {
                count++;
            }
            n/=2;
        }
        return count;
    }
};
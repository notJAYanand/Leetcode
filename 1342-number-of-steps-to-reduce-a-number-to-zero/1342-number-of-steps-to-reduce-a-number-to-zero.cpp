class Solution {
public:
    int numberOfSteps(int n) {
        int steps=1;
        if(n==1)
        {
            return steps;
        }
        if(n==0)
        {
            return 0;
        }
        if(n%2==0)
        {
            return steps+numberOfSteps(n/2);
        }
        else
        {
            return steps+numberOfSteps(n-1);
        }
    }
};
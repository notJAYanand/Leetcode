class Solution {
public:
    int countOperations(int num1, int num2) {
        int steps=1;
        if(num1==0 || num2==0)
        {
            return 0;
        }
        if(num1 >= num2)
        {
            return steps+countOperations(num1-num2,num2);
        }
        if(num1 < num2)
        {
            return steps+countOperations(num1,num2-num1);
        }
        return steps-1;
    }
};
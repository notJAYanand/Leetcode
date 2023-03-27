class Solution {
public:
    int kItemsWithMaximumSum(int one, int zero, int neg, int k) {
        int sum=0;
        vector<int> v;
        for(int i=0;i<k;i++) {
            if(one!=0) {
                sum+=1;
                one--;
            }
            else if(one==0) {
                if(zero!=0) {
                    zero--;
                }
                else if(zero==0 && neg!=0) {
                    sum-=1;
                    neg--;
                }
            }
        }
        return sum;
    }
};
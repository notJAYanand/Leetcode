class Solution {
public:
//     long long int factorial(int n)
//     {
//         if(n==0) return 1;
//         // vector<int> fact(n+1,0);
//         long long int fact[n+1];
        
//         fact[0]=1;
//         fact[1]=1;
//         // fact[2]=2;
//         for(int i=2;i<n+1;i++)
//         {
//             fact[i]=i*fact[i-1];
//         }
//         return fact[n];
//     }
//     int trailingZeroes(int n) {
        
//         long long int x=factorial(n);
//         int count=0; 
//         while(x!=0)
//         {
//             if(x%10==0) count++;
//             x/=10;
//         }
//         // cout<<factorial(n);
//         return count;
//     }
    int trailingZeroes(int n) {
        int res = 0;
        while (n)
        {
            n /= 5; 
            res += n;
        }
            
        return res;
    }
};
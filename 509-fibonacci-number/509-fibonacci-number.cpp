class Solution {
public:
    int fib(int n) {
       
        if(n==0)
        {
            return 0;   
        }
        else if(n==1||n==2)
        {
            return 1;
        }
        else
            return fib(n-1)+fib(n-2);
//         vector<int> f(n+1,0);
//         f[0]=0;
//         f[1]=1;
        
        
//         for(int i=2;i<n+1;i++)
//         {
//             f[i]=f[i-1]+f[i-2];
//         }
//      return f[n];

        
    }
};
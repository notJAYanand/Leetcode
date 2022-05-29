class Solution {
public:
//     bool isPrime(int n)
//     {
//         // Corner case
//         if (n <= 1)
//             return false;

//         // Check from 2 to square root of n
//         for (int i = 2; i*i< n; i++)
//             if (n % i == 0)
//                 return false;

//         return true;        
//     }
    //Sieve of Eratosthenes uses an extra O(n) memory and its runtime complexity is O(n log log n).
    int countPrimes(int n) {
        if(n==0||n==1) return 0;
        int i=0,j=n-1;
        int count=0;
        vector<bool> isPrime(n);
        for(int i=2;i<n;i++)
        {
            isPrime[i]=true;
        }
        for(int i=2;i*i<n;i++)
        {
            if(!isPrime[i]) continue;
            for(int j=i*i;j<n;j+=i)
            {
                isPrime[j]=false;
            }
        }
        for(int i=2;i<n;i++)
        {
            if(isPrime[i]) count++;
        }
        return count;
    }
};
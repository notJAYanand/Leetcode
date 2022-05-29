class Solution {
public:
    
// long long int fact(int n) {
//     long long int result[10001] = {0};
    
//     result[0] = 1;
//     result[1] = 1;
//     result[2] = 2;
        
//     for (int i = 3; i <= n; ++i) {
//         result[i] = i * result[i - 1];
     
      
//    }
//     return result[n];
// }
    
    int trailingZeroes(int n) {
        // long long int f=fact(n);
        
        // string s=f.to_string();
        // int i=s.length()-1;
        int count=0; //count power of 5 essentially
        int d=5;
        while(d<=n)
        {

            count=count+n/d;
            d*=5;
        }
        return count;
    }
};
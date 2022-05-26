class Solution {
public:
    // ` =96
    string convert(string s) {
        //convert+ transform #1
        string num="";
        for(int i=0;i<s.length();i++)
        {
            // sum+=s[i]-96;
            num+=to_string(s[i]-96);
        }
        return num;
    }
    long long  firstTransform(string s) {
        long long  sum=0;
        for(int i=0;i<s.length();i++)
        {
            sum+=(s[i]-'0');
            // num+=(s[i]-96);
        }
        return sum;
    }
        
    int addDigits(int n) {
        int sum=0;
        while(n!=0)
        {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int getLucky(string s, int k) {
        // char index= c-96 
        // example:- a= 'a'-96=97-96=1 'a' ascii=97
        // z='z'-96=122-96=26
        string num=convert(s);                  // convert
        long long int t=firstTransform(num); // transform 1
        while(k!=1)   //rest transformations
        {
            t=addDigits(t);
            k--;
        }
        return t;
    }
};
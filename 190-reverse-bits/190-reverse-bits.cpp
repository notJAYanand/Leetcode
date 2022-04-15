class Solution {
public:
    string convert(uint32_t n)
    {
        string s="";
        stringstream ss;
        int count=0;
        while(n)
        {
            count++;
            ss<<(n%2);
            n/=2;
        }
        while(count<32)
        {
            ss<<0;
            count++;
        }
        ss>>s;
        return s;
    }
    uint32_t reverseBits(uint32_t n) {
        uint32_t sum=0;
        //00001101= 13    10110000 = 176
        string res=convert(n);
        int count=31;
        int i=0;
        while(count>=0)
        {
            sum+=(res[i]-'0')*pow(2,count);
            i++;
            count--;
        }
        return sum;
    }
};
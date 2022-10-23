class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        
        // l=0       r=5 
        // s t r i n g
        
        while(left<right)
        {
            //char tmp=s[left]; //tmp= h 
            //s[left++]=s[right];
            //s[right--]=tmp;
            std::swap(s[left],s[right]);
            left++;
            right--;
        
        }
    }
};
class Solution {
public:
    int countVowelStrings(int n) {
        return (n+4)*(n+3)*(n+2)*(n+1) / 24;
    }
    //  n     a   e   i   o   u
    //  1     1   1   1   1   1 = 5
    //  2     5   4   3   2   1 = 15
    //  3     15  10  6   3   1 = 30
};
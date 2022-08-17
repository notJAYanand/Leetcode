class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> st;
        
        for(int i=0;i<words.size();i++)
        {
            string temp="";
            for(int j=0;j<words[i].length();j++)
            {
                temp+=morse[words[i][j]-'a'];
            }
            st.insert(temp);
        }
        // return 2;
        return st.size();
    }
};
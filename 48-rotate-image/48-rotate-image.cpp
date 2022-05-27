class Solution {
public:
    void transpose(vector<vector<int>>& m) 
    {
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
    }
    
    void reverseRows(vector<vector<int>>& m) 
    {
        for(int i=0;i<m.size();i++)
        {
            int left=0;
            int right= m.size()-1;
            while(left<right)
            {
                swap(m[i][left],m[i][right]);
                left++;
                right--;
            }
        }
    }
    
    void rotate(vector<vector<int>>& matrix) {
        // Transpose
        transpose(matrix);
        // Reverse each row
        reverseRows(matrix);
    }
};
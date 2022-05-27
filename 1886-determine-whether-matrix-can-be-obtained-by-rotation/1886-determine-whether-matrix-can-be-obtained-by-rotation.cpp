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
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int r=3;
        if(mat==target)
        {
            return true;
        }
        while(r--)
        {
            rotate(mat);
            if(mat==target)
            {
                return true;
            }
        }
        return false;
    }
};
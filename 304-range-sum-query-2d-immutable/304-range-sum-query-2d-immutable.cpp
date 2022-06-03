class NumMatrix {
public:
    vector<vector<int>>dp;
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m= matrix[0].size();
        
        if(n==0 || m==0) return;
        dp=vector<vector<int>>(n + 1, vector<int>(m + 1));
        // int dp[n][m+1];
        for(int r=0;r<n;r++)
        {
            for(int c=0; c<m; c++)
            {
                dp[r][c+1]= dp[r][c]+matrix[r][c];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int r= row1; r<=row2; r++)
        {
            sum+=dp[r][col2+1]- dp[r][col1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
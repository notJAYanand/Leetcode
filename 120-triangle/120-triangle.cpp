class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int total=triangle[0][0];
        // int min=INT_MAX;
        int k=0;
        for(int i=triangle.size()-2;i>=0;i--)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                triangle[i][j] += min(triangle[i+1][j+1],triangle[i+1][j]);
            }
            // total+=min;
            // min=INT_MAX;
        }
        return triangle[0][0];
    }
};
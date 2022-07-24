class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         TLE(116/129)
//         unordered_set<int>st;
//         for(int i=0;i<matrix.size();i++)
//         {
//             for(int j=0;j<matrix[0].size();j++)
//             {
//                 st.insert(matrix[i][j]);
//             }
//             if(st.find(target)!=st.end())
//             {
//                 return true;
//             }
                
//         }
//         return false;
        int m = matrix.size();
        int n = matrix[0].size();
        
        int i = m - 1;
        int j = 0;
        
        while (i>=0 && j<n){
            
            if (matrix[i][j] == target) return true;
            
            else if (matrix[i][j] < target) j++;
            
            else i--;
        }
        return false;        
    }
};
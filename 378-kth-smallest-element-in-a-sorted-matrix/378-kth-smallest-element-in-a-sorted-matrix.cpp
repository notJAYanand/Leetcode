class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // return 0;
        priority_queue<int> pq;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                pq.push(matrix[i][j]);
                if(pq.size()>k)
                {
                    pq.pop();
                }
            }
        }
        // while(k-- && !pq.empty())
        // {
        //     pq.pop();
        // }
        return pq.top();
    }
};
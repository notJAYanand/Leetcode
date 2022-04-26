class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        //poora prims algo ka khela hai , kruskal bhi laga sakte ho
        int n= points.size();
        // int m= points[0].size();
        
        int mstCost=0;
        int edgesUsed=0;
        
        //visited array
        vector<bool> inMST(n);
        vector<int> minDist(n,INT_MAX);
        minDist[0]=0;
        while(edgesUsed<n)
        {
            int min=INT_MAX;
            int cur=-1;
            // pick least weight node which is not in MST
            for(int i=0;i<n; i++)
            {
                if(!inMST[i] && min>minDist[i])
                {
                    min=minDist[i];
                    cur=i;
                }
            }   
            mstCost+=min;
            edgesUsed++;
            inMST[cur]=true;
            for(int j=0;j<n;j++)
            {
                int w=abs(points[cur][0]-points[j][0]) + 
                       abs(points[cur][1]-points[j][1]);
                if(!inMST[j] && minDist[j]>w)
                {
                    minDist[j]=w;
                }
            }
        }
        return mstCost;
    }
};
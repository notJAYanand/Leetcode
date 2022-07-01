class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // support variables
        int res = 0, currBatch;
        // sorting boxes by decreasing capacity
        sort(boxTypes.begin(), boxTypes.end(), cmp);
		// carrying as many larger sized boxes as we can first
        for (auto &i: boxTypes) {
            currBatch = min(i[0], truckSize);
            truckSize -= currBatch;
            res += currBatch * i[1];
            if (truckSize==0) break;
        }
        return res;
        
    }
};
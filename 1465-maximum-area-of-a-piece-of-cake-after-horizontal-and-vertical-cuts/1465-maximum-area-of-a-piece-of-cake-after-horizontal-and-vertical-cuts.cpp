class Solution {
public:
    int mod=1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long int l=0,b=0;
        //insert 0 and h, 0 and b in hCuts and vCuts array
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        //sort the arrays
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        //finding max breadth
        //i=1 se chaalu kiye because element at i=0 is 0 anyways
        for(int i=1;i<horizontalCuts.size();i++)
        {
            if(b<horizontalCuts[i]-horizontalCuts[i-1])
            {
                b=horizontalCuts[i]-horizontalCuts[i-1];
            }
        }
        
        
        //find max length
        for(int i=1;i<verticalCuts.size();i++)
        {
            if(l<verticalCuts[i]-verticalCuts[i-1])
            {
                l=verticalCuts[i]-verticalCuts[i-1];
            }
        }        
        
        //return max length*max breadth % 10e9+7 which will give max area (res)
        int res=(l*b)%mod; 
        return res;
    }
};
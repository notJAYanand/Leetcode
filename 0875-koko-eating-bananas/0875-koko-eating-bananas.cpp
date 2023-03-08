class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int each=1;
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        
        while(l<r)
        {
            int mid=(l+r)/2;
            int rh=0;
            for(int i=0;i<n;i++)
            {
                rh+= (piles[i]/mid)+(piles[i]%mid!=0);

                
            }
            
            if(rh<=h)
            {
                r=mid;
            }
            else
            {
                l=mid+1;;
            }
        }
        return r;
    }
};
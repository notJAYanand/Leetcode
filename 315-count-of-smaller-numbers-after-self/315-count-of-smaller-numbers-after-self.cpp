class Solution {
public:
    void merge(vector<int>& count,vector<pair<int,int>>& vp,int& left,int& mid,int& right){
        vector<pair<int,int>> temp(right-left+1);
        int i=left;
        int j=mid+1;
        int k=0;
        
        while(i<=mid && j<=right){
            if(vp[i].first<=vp[j].first){
                temp[k++]=vp[j];
                j++;
            }else{
                count[vp[i].second]+=(right-j+1);
                temp[k++]=vp[i];
                i++;
            }
        }
        
        while(i<=mid){
            temp[k++]=vp[i];
            i++;
        }
        
        while(j<=right){
            temp[k++]=vp[j];
            j++;
        }
        
        for(int i=left;i<=right;i++){
            vp[i]=temp[i-left];
        }
        
    }
    
    void mergeSort(int left,int right,vector<pair<int,int>>& vp,vector<int>& count){
        if(left==right)
            return;
        
        int mid=(left+right)>>1;
        mergeSort(left,mid,vp,count);
        mergeSort(mid+1,right,vp,count);
        
        merge(count,vp,left,mid,right);
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(n,0);
        
        vector<pair<int,int>> vp;
        for(int i=0;i<n;i++){
            vp.push_back({nums[i],i});
        }
        
        mergeSort(0,n-1,vp,count);
        return count;
    }
    
//     vector<int> countSmaller(vector<int>& nums) {
//         int n=nums.size();
//         if(n==1) return {0};
//         vector<int> count(n,0);
        
//         //Binary TLE 50/65
//         // for(int i=0;i<n-1;i++)
//         // {
//         //     for(int j=n-1;j>i;j--)
//         //     {
//         //         if(nums[i]>nums[j])
//         //         {
//         //             count[i]++;
//         //         }
//         //     }
//         // }
        
        
//         return count;
//     }
};
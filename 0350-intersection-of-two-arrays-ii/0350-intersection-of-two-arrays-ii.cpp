class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());//nlogn
        
        int n1=nums1.size();
        int n2=nums2.size();
        
        vector<int> result;
        
        // for(int i=0;i<n1;i++) {
        //     for(int j=0;j<n2;j++) {
        //         if(nums1[i]==nums2[j]) {
        //             result.push_back(nums1[i]);
        //             break;
        //         }
        //     }
        // }
        // int k=0;
        int i=0;
        int j=0;
        while(i<n1 && j<n2) {
            if(nums1[i]<nums2[j]) {
                i++;
            }
            else if(nums1[i]>nums2[j]) {
                j++;
            }
            else{
                result.push_back(nums1[i]);
                i++;j++;
            }
        }
        return result;
    }
};
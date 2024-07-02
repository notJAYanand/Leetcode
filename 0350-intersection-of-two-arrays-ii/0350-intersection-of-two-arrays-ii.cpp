class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());//nlogn
        
        int n1=nums1.size();
        int n2=nums2.size();
        
        // vector<int> result;

        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2) {
            if(nums1[i]<nums2[j]) {
                i++;
            }
            else if(nums1[i]>nums2[j]) {
                j++;
            }
            else{
                // result.push_back(nums1[i]); //its using space, we can just return 1 of the arrays
                nums1[k++]=nums1[i];
                i++;j++;
            }
        }
        // return result;
        return vector<int>(nums1.begin(),nums1.begin()+k);
    }
};
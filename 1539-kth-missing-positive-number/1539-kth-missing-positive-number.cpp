class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int> st;
        for(auto i: arr) {
            st.insert(i);
        }
        int i=0;
        int missing=0;
        while(k--) {
            i++;
            if(st.find(i)!=st.end()) {
                k++;
                continue;
            }
            else {
                missing=i;
            }
        }
        return missing;
    }
};
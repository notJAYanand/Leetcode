class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        //O(n3) se kar sakte hai par saara pass nhi ho raha n2 se bhi nhi ho raha
        //ab jugad sochna hoga
        //stack use kar ke third element(1 3 2 ka 3) ke bal bute pe kaam karenge 
        int n= nums.size();
        stack<int>st;
        // 1 3 2 
        int third= INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]<third)
                return true;
            while(!st.empty() && st.top() <nums[i])
            {
                third=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};
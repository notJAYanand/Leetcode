class NumArray {
    vector<int> nums;
public:
    int sum=0;
    NumArray(vector<int>& nums) {
        this->nums=nums;
        //prefix sum
        // for(int i=1;i<nums.size();i++){
        //     nums[i] = nums[i] + nums[i-1];
        // }
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
    }
    
    void update(int index, int val) {
        // nums[index]=val;
        sum=sum-nums[index];     //subtract old element  from sum at index and then update by adding     
                            //new element val.
        nums[index]=val;
        sum+=val;
    }
    
    int sumRange(int left, int right) {
        // int sum=0;
        // for(int i=left;i<=right;i++)
        // {
        //     sum+=nums[i];
        // }
        // return sum;
        
        //optimize
        // if(left == 0){
        //     return nums[right];
        // }
        // return nums[right]-nums[left-1];
        int res=sum; 
        for(int i=0;i<left;i++){    //subtract all element before left and after right
            res-=nums[i];
        }
        for(int i=right+1;i<nums.size();i++){
            res-=nums[i];
        }
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
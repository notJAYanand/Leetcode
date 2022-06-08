class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=int(len(nums))
        lo=0
        hi=n-1
        mid=0
        temp=0
        for i in range(0,n):
            if(nums[mid]==0):
                temp=nums[mid]
                nums[mid]=nums[lo]
                nums[lo]=temp
                lo+=1
                mid+=1
            elif(nums[mid]==2):
                temp=nums[mid]
                nums[mid]=nums[hi]
                nums[hi]=temp
                hi-=1
            else:
                mid+=1
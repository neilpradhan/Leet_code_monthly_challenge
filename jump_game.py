class Solution:
    
    def canJump(self, nums: List[int]) -> bool:
        high = 0
        index = 0;
        while(index<len(nums)-1 and high<len(nums)-1):
            if nums[index]==0:
                if (high<=index):
                    return False
            high = max(high,nums[index]+index)
            print(high)
            index=index+1

        return high>=len(nums)-1

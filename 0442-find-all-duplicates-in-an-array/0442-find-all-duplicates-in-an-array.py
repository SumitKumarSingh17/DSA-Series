class Solution(object):
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        lst=[]
        nums.sort()
        for i in range(len(nums)-1):
            if(nums[i]==nums[i+1]):
                lst.append(nums[i])
                i+=1
        return lst
        
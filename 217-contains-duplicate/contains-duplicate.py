class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        ls=nums
        ls1=set(nums)
        if len(ls)==len(ls1):
            return False
        return True

       

       
        
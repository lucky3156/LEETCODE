class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mipr,mapr,sol=nums[0],nums[0],nums[0]
        for i in range(1,len(nums)):
            prod=max(nums[i],nums[i]*mipr,nums[i]*mapr)
            mipr=min(nums[i],nums[i]*mipr,nums[i]*mapr)
            mapr=prod
            sol=max(sol,mapr)
        return sol
        
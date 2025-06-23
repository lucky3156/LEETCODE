class Solution(object):
    def rec(self,n,dp):
        if n==0:
            return 1
        if n<0:
            return 0
        if dp[n]!=-1:
            return dp[n]
        sol=self.rec(n-1,dp)+self.rec(n-2,dp)
        dp[n]=sol
        return sol
    def climbStairs(self, n):
        dp=[-1]*(n+1)
        sol=self.rec(n,dp)
        return sol
        
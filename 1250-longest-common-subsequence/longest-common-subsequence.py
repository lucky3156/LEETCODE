class Solution(object):
    def rec(self,i1,i2,t1,t2,dp):
        if i1>len(t1)-1 or i2>len(t2)-1:
            return 0
        if dp[i1][i2]!=-1:
            return dp[i1][i2]
        if t1[i1]==t2[i2]:
            dp[i1][i2]=1+self.rec(i1+1,i2+1,t1,t2,dp)
            return dp[i1][i2]
        else:
            dp[i1][i2]=max(self.rec(i1+1,i2,t1,t2,dp),self.rec(i1,i2+1,t1,t2,dp))
            return dp[i1][i2]
        return dp[i1][i2]
    def longestCommonSubsequence(self, text1, text2):
        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        dp=[[-1 for _ in range(len(text2))]for _ in range(len(text1))]
        return self.rec(0,0,text1,text2,dp)
        
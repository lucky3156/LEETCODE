class Solution:
    def findTheDifference(self, s: str, t: str) :
        se = ''.join(sorted(s))
        te = ''.join(sorted(t))
        for i in range(0,len(se)):
            if se[i]!=te[i]:
                return te[i]
        return te[-1]
class Solution(object):
    def isValidSerialization(self, preorder):
        """
        :type preorder: str
        :rtype: bool
        """
        ls=list(preorder.split(","))
        cnt=1
        if len(ls)>1 and ls[0]=="#":
            return False
        if ls[0]=="#":
            return True
        for item in ls:
            cnt=cnt-1
            if cnt<0:
                return False
            if item != "#":
                cnt=cnt+2
        if cnt==0:
            return True
        return False

        
        
class Solution:
    def findTheDifference(self, s: str, t: str) :
        xor = 0 
        for char in s+t  :
            xor^=ord(char)
        return chr(xor)

            
        
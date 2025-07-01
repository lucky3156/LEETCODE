class Solution(object):
    def numberOfSpecialChars(self, word):
        count=0
        lower={char: -1  for char in 'abcdefghijklmnopqrstuvwxyz'}
        upper={char: -1  for char in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'}
        for i in range(len(word)):
            if word[i].islower():
                lower[word[i]]=i
            else:
                if upper[word[i]]==-1:
                    upper[word[i]]=i
        for char in 'abcdefghijklmnopqrstuvwxyz':
            if lower[char]!=-1 and upper[char.upper()] > lower[char]:
                count+=1
        return count

        
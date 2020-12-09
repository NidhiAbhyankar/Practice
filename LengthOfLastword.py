class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
       
        temp=s.split()
        if len(temp)==0:
            return 0
        temp1=temp[-1]
        
        return len(temp1)
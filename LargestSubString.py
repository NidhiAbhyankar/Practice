class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sub=[]
        maxcount=counts=0
        for i in range(len(s)):
            for j in range(i,len(s)):
                if s[j] in sub:
                    break;
                sub.append(s[j])
                counts+=1
            if(maxcount<counts): maxcount=counts
            counts=0
            sub.clear()
        return maxcount
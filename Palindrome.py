class Solution:
    def isPalindrome(self, n: int) -> bool:
        if(n<0):
            return False
        arr=[int(y) for y in str(n)]     #list comprehension (gives errorr if it has anything besides digit)
        x=len(arr)
        
        for i in range(int(x/2)):
	        if(arr[i]!=arr[x-1]):
		        return False    
	        x-=1
        
        return True

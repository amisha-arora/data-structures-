class Solution(object):
    def maxProduct(self, nums):
        res=max(nums) # initialize the result with maximum of nums
        curmax,curmin=1,1
        for n in nums: 
            if n==0:# if its true then the product will turn to 0
                curmax,curmin=1,1 # reintialize curmax and curmin as 1
                continue
            temp=n*curmax # since we want to use the curmax before updation
            # here we considering curmin because product of two negative nos is positive
            curmax=max(n*curmax,n*curmin,n)
            # here we considering curmax because product of one positive and one nos negative is negative 
            curmin=min(temp,n*curmin,n)
            #calculate the maximum of res and curmax
            res=max(res,curmax)
        return res

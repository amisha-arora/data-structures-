class Solution(object):
    def mergeAlternately(self, word1, word2):
        res="" #initialize the result 
        l1=len(word1) # to calculate the length of string 1
        l2=len(word2) # to calculate the length of string 2
        i=0 # intialize the count to be zero
        while(i<l1 or i<l2): #iterate till we reach at the end of either of the two loop
            if(i<l1):
                res+=(word1[i]) #add the letter of string 1 in result
            if(i<l2):
                res+=(word2[i]) # add the letter of string 2 in result
            i=i+1
        return res #return the result

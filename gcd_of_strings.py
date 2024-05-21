class Solution(object):
    def gcdOfStrings(self, str1, str2):
        #to calculate the length of the two strings
        l1=len(str1)
        l2=len(str2)
        # to calculate the GCD
        def gcd(l1, l2):
            if l1 > l2:
                small = l2
            else:
                small = l1
            for i in range(1, small + 1):
                # it is calculation of hcf
                if((l1 % i == 0) and (l2 % i == 0)):
                    gcd = i
            return gcd
        if(str1+str2!=str2+str1):# to check their equality
            return ""
        else:
            cal=gcd(l1,l2) # calculate the shortest length or GCD so that both strings can be divided
            return str1[0:cal]

# @return an integer
    def reverseBits(self, n):
        finalres=0     #assume the final result to be zero
        for i in range(0,32):     #to calculate and shift the result by respective number of bits
            res=n&1     #perform AND operation between the input no. and 1 
            reslsb=res<<(31-i)    # now left shift the result by number of times to reverse the integer
            finalres=finalres|reslsb   # calculate the final result by performing the or operation 
            n=n>>1       # now right shift the input by 1 for calculating the next result
        return finalres
        

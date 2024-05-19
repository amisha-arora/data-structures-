class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int finalres=0; //assume the final result to be zero
        for(int i=0;i<32;i++){ // to calculate and shift the result by respective number of bits
            int res=n&1; // perform AND perform between the input no. and 1 
            int revlsb=res<<(31-i);//now left shift the result by number of times to reverse the integer
            finalres=finalres|revlsb; // calculate the final result by performing the or operation 
            n=n>>1; //now right shift the input by 1 for calculating the next result
        }
        return finalres;
        
        
    }
};

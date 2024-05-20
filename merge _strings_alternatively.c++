class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;// initialize the res
        int l1=word1.size(); // to calculate the length of first string
        int l2=word2.size(); // to calculate the length of second string 
        int i=0;// intialize the count to be zero
        while(i<l1 || i<l2){ // iterate till we reach at the end of either of the two loop
            if (i<l1){
                res+=(word1[i]);// add the letter of string 1 in result
            }
            if (i<l2){ // add the letter of string 2 in result
                res+=(word2[i]);
            }
            i=i+1;  
        }
        return res;// return the result
        
    }
};

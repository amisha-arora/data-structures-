class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();// for calculating length of the character array
        int r=0;
        int i=0;
        while(i<n){
            int count=0;// initialize the count to be 0
            char curChar=chars[i];// initialize the current charcter as array's first character of consecutive repeating characters
            while(i<n && chars[i]==curChar){//iterate till you reach at the end of a consecutive group of characters
                count+=1;
                i+=1;
            }
            chars[r]=curChar;// finally assign the first unique charcter back to array
            r+=1;// increment to pointer
            if(count>1){ // if the count is greater than 1 then implement this condition, otherwise skip to next group
                string countstr=to_string(count);// convert the count to string to inject it itno the array
                for(char c:countstr){ // The reason we iterate through countStr is that count is a number that might have more than one digit.
                    chars[r]=c;// assign each digit back to the array
                    r+=1;
                }
            }
        }
        return r;// return r , since it is getting increment after conditon
        

    }
};

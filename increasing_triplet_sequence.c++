class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX; // Initialize first to the largest possible int value
        int second=INT_MAX; // Initialize second to the largest possible int value
        if(nums.size()<3){// if the array size is less than 3 then no triplet exist
            return false;
        }
        for(int i:nums){// iterate each element of the array
            if(i<=first){//check if the cuurent value is smaller than first if so update the first
                first=i;
            }
            else if(i<=second){ //check if the cuurent value is smaller than second if so update the fsecond
                second=i;
            }
            else{ // Found a number greater than both first and second 
                return true;
            }
            
        }
        return false;// if no triplet exist 
    }
};

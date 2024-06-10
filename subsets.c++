class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;// It is used to store all the subsets.
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){//This loop iterates through all possible subsets. 1 << n is equivalent to 2^n representing all possible combinations of the n elements.
            vector<int> subset;
            for(int j=0;j<n;j++){//This loop checks each bit of the integer i.
                if(i&(1<<j)){//This condition checks if the j-th bit of i is set. If it is, it means the j-th element is included in the current subset.
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }
        return result;     
    }
};

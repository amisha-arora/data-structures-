class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroPos=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[nonZeroPos++]=nums[i];
            }
        }
        for(int j=nonZeroPos;j<n;j++){
            nums[j]=0;
        }
    }
};

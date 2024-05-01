class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high){
            int mid = (low + high) / 2;// finding the middle element
            if(nums[mid] == target) // element found in the middle 
                return mid; 
        
            if(nums[low] <= nums[mid]){  // left is sorted
                if(nums[low] <= target  &&  target <= nums[mid]){//checking if the element lies in sorted array or not
                    high = mid-1;
                }else{
                    low = mid+1;
                }

            }else{   // right is sorted
                if(nums[mid] <= target  && target <= nums[high]){//checking if the element lies in sorted array or not
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }

        return -1;
    }
};

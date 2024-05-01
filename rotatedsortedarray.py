class Solution(object):
    def search(self, nums, target):
        n=len(nums)
        low=0
        high=n-1
        while(low<=high):
            mid=(low+high)/2 #finding the middle element
            if(target==nums[mid]):#returning the middle element if equal to target
                return mid
            elif (nums[low]<=nums[mid]):#left is sorted
                if(nums[low]<=target and target<=nums[mid]):#checking if the element lies in sorted array or not
                    high=mid-1
                else:
                    low=mid+1
            else: #right is sorted
                if(nums[mid]<=target and target<=nums[high]): #checking if the element lies in sorted array or not
                    low=mid+1
                else:
                    high=mid-1
        return -1

        
        

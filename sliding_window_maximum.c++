class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(!dq.empty() && dq.front()==i-k) dq.pop_front();//to delete out of range elements

            while(!dq.empty() && nums[dq.back()]<nums[i]){//to delete the elements from deque that are less than the current number to maintain the decreasing order of deque
                dq.pop_back();
            }
            dq.push_back(i);// if it doesn't violent the condition push it to deque
            if(i>=k-1)ans.push_back(nums[dq.front()]); // to return the maximum element out of the array check if lies in the range
        }
        return ans;
        
    }
};

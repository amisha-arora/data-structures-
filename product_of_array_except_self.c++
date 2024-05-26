class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> answer(len, 1);

        // Calculate left products
        int leftProduct = 1;
        for (int i = 0; i < len; ++i) {
            answer[i] = leftProduct;
            leftProduct *= nums[i];
        }

        // Calculate right products and final answer
        int rightProduct = 1;
        for (int i = len - 1; i >= 0; --i) {
            answer[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return answer;
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;

        // Step 1: Find the first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // Step 2: If no such element, reverse the array (last permutation)
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the smallest element greater than nums[index] to the right
        int nextGreaterIndex = -1;
        for (int i = n - 1; i > index; i--) {
            if (nums[i] > nums[index]) {
                nextGreaterIndex = i;
                break;
            }
        }

        // Step 4: Swap with the next greater element
        swap(nums[index], nums[nextGreaterIndex]);

        // Step 5: Reverse the suffix starting from index + 1
        reverse(nums.begin() + index + 1, nums.end());
    }
};

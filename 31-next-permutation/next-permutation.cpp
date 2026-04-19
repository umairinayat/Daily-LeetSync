class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // 1) Find first index i from right where nums[i] < nums[i+1]
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;

        // 2) If found, find rightmost j > i where nums[j] > nums[i], then swap
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) j--;
            swap(nums[i], nums[j]);
        }

        // 3) Reverse suffix starting at i+1 to get smallest lexicographic order
        reverse(nums.begin() + i + 1, nums.end());
    }
};
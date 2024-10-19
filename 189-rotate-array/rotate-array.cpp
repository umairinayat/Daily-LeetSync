class Solution {
public:
    /*Approach
Normalize Rotation: Compute the effective number of rotations needed by taking k % nums.size() to handle cases where k is larger than the array length.
Reverse Subarrays:
Reverse the first part of the array, from the beginning to the end minus k elements.
Reverse the second part of the array, from the end minus k elements to the end.
Reverse the entire array to achieve the final rotated result.
Combine Results: The combined effect of these three reversals results in the array being rotated to the right by k positions.*/
    void rotate(vector<int>& nums, int k) {
         k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
    }
};
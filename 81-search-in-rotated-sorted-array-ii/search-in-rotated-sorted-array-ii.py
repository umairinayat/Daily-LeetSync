class Solution:
    def search(self, nums, target):
        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = left + (right - left) // 2

            if nums[mid] == target:
                return True

            if nums[left] == nums[mid]:
                left += 1
                continue

            pivot_array = nums[left] <= nums[mid]
            target_array = nums[left] <= target

            if pivot_array == target_array:
                if target < nums[mid]:
                    right = mid - 1
                else:
                    left = mid + 1
            else:
                if pivot_array:
                    left = mid + 1
                else:
                    right = mid - 1

        return False
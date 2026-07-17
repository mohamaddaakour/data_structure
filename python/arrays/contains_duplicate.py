# Given an integer array nums, return true if any value appears at least twice in the array,
# and return false if every element is distinct.

from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        new_set = set(nums)

        print(new_set)
        print(nums)

        return len(new_set) != len(nums)


solution = Solution()

print(solution.containsDuplicate([1,2,3,1]))
print(solution.containsDuplicate([1,2,3,4]))
print(solution.containsDuplicate([1,1,1,3,3,4,3,2,4,2]))

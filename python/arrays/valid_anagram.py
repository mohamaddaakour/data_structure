# Given two strings s and t,
# return true if the two strings are anagrams of each other, otherwise return false.

# An anagram is a string that contains the exact same characters as another string,
# but the order of the characters can be different.

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # we used hash map here
        
        result_s: dict[str, int] = {}
        result_t: dict[str, int] = {}

        for i in s:
            if i not in result_s:
                result_s[i] = 0
            else:
                result_s[i] += 1

        for j in t:
            if j not in result_t:
                result_t[j] = 0
            else:
                result_t[j] += 1

        return result_t == result_s


solution = Solution()

print(solution.isAnagram("anagram", "nagaram"))
print(solution.isAnagram("rat", "car"))
print(solution.isAnagram("aacc", "ccac"))

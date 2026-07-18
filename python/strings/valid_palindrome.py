# A phrase is a palindrome if,
# after converting all uppercase letters into lowercase letters and removing
# all non-alphanumeric characters, it reads the same forward and backward.
# Alphanumeric characters include letters and numbers.

# Given a string s, return true if it is a palindrome, or false otherwise.

class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_str: str = ""

        for i in s:
            if i.isalnum():
                new_str += i.lower()

        rev_new_str: str = new_str[::-1].lower()

        return new_str == rev_new_str


solution = Solution()

print(solution.isPalindrome("A man, a plan, a canal: Panama"))
print(solution.isPalindrome("race a car"))
print(solution.isPalindrome(" "))
print(solution.isPalindrome("hello world what is that"))
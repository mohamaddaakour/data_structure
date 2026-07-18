class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) == 1:
            return False
        
        stack: list[str] = []
        last: str = ""

        for element in s:
            if element in "{[(":
                stack.append(element)
                continue
            
            if not stack:
                return False

            last = stack.pop()

            if (element == "}" and last != "{") or (element == ")" and last != "(") or (element == "]" and last != "["):
                return False

        if stack:
            return False
    
        return True
    
solution = Solution()

print(solution.isValid("()"))
print(solution.isValid("()[]{}"))
print(solution.isValid("(]"))
print(solution.isValid("([])"))
print(solution.isValid("([)]"))
print(solution.isValid("("))
print(solution.isValid(""))
print(solution.isValid("((("))
print(solution.isValid(")))"))
print(solution.isValid("()))"))

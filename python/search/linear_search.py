from typing import List

# will return the index of the target number
def linear_search(arr: List[int], target: int) -> int:
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    
    return -1

print(linear_search([1, 3, 4, 2], 4))
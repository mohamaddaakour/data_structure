from typing import List

def sum_arr_rec(arr: List[int]) -> int:
    if not arr:
        return 0
    
    # we take the first element and remove it from the array
    return arr[0] + sum_arr_rec(arr[1:])

print(sum_arr_rec([1, 2, 3]))
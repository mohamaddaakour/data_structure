def sum_arr(arr: list[int]) -> int:
    if len(arr) == 0:
        return 0
    
    return arr[0] + sum_arr(arr[1:])

print(sum_arr([1, 2, 3]))
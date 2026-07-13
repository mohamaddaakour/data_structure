from typing import List

def bubble_sort(arr: List[int]) -> List[int]:
    n = len(arr)

    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] > arr[j]:
                arr[i] , arr[j] = arr[j], arr[i]
    
    return arr


print(bubble_sort([1, 3, 2, 0]))

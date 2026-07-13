def find_max(arr):
    if len(arr) == 1:
        return arr[0]

    max_rest = find_max(arr[1:])

    if arr[0] > max_rest:
        return arr[0]

    return max_rest


numbers = [3, 8, 2, 10, 5]
print(find_max(numbers))
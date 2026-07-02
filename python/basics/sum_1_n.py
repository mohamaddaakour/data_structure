def sum_1_n(n: int) -> int:
    sum: int = 0

    for num in range(n + 1):
        sum += num
    
    return sum

print(sum_1_n(5))
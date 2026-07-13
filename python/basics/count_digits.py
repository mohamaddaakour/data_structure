def count_digits(n: int) -> int:
    count: int = 0

    if n < 0:
        n = -n

    while n > 0:
        count += 1
        n //= 10
    
    return count

print(count_digits(-121))
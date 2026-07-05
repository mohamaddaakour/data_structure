def reverse_number(num: int) -> int:
    result: int = 0
    if num < 0:
        return 0
    
    while num > 0:
        result = result * 10 + (num % 10)
        num //= 10
    
    return result

print(reverse_number(12))
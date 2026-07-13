def reverse_number(n: int) -> int:
    if n < 0:
        return 0
    
    result: int = 0

    while n > 0:
        result = (n % 10) + result * 10

        # in python like this we divide and take the integer number only
        n //= 10

    return result

print(reverse_number(122))
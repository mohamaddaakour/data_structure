def gcd(a: int, b: int) -> int:
    if b == 0:
        return a
    
    # here we are just calling the function recursively we don't want any operation
    # using it
    # so we don't stop until we get the base case and in this moment
    # the response will be the value of a
    return gcd(b, a % b)

print(gcd(10, 6))
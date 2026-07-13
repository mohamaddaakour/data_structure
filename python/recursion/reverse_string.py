def reverse_string(string: str) -> str:
    if len(string) == 0:
        return ""
    
    return reverse_string(string[1:]) + string[0]

print(reverse_string("hello"))
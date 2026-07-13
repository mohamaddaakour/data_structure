```python
a = 2
b = 3

# we can swap in this way, this is called tuple unpacking
a, b = b, a
```

```python
# int and None are just hints
# in python we don't use null or void we use None instead
# this function should return nothing
def swap(a: int, b: int) -> None:
    tmp: int
    tmp = a
    a = b
    b = tmp

# if we swap in this way the 2 elements will be swaped inside
# this function only
```

```python
# to take a value from the user we use input() keyword
# everything get out of the input will be string only

# int() will cast the string into integer

age: int = int(input("What is your age?\n"))

# to print the data type of a variable
print(type(age)) # <class 'int'>
```

```python
# to cast into a float
float(input("Enter the radius: "))
```

```python
age = 20

# to use number inside the string we use f keyword
print(f"Your age is {age}")
```

```python
# if we have a float number and we want to print the number with
# just two numbers only after the . we use this way
print(f"Area: {area:.2f}")
```

```python
# in python we can't use pre-increment or post-increment like count++
# we use this way instead
count += 1
```

```python
# in python like this we divide and take the integer number only

print(5 // 2) # 2
```

```python
# to sort with 3 different criterias we use this way
sorted_list = sorted(arr, key=lambda word: (count_vowels(word), len(word), word))
```
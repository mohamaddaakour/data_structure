# input() is a built in method used to take value from the user
# everything get out of input() will be a string
# float() is used to cast the value from the user from a string to float
seconds: float = float(input("Give me the time in seconds: "))

minutes: float = seconds / 60
hours: float = minutes / 60

# f keyword is used to print a number inside a string (concatenation)
print(f"{seconds} seconds in minutes is: {minutes}")
print(f"{seconds} seconds in hours is: {hours}")

print(type(seconds))
seconds: float = float(input("Give me the time in seconds: "))

minutes: float = seconds / 60
hours: float = minutes / 60

print(f"{seconds} seconds in minutes is: {minutes}")
print(f"{seconds} seconds in hours is: {hours}")
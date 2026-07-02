import math

print("Choose a shape:")
print("1. Circle")
print("2. Rectangle")

choice: int = int(input("\nEnter your choice (1-2): "))

if choice == 1:
    radius: float = float(input("Enter the radius: "))

    area: float = math.pi * (radius * radius)
    perimeter: float = 2 * math.pi * radius

    print(f"Area: {area:.2f}")
    print(f"Permieter: {perimeter:.2f}")

elif choice == 2:
    length: float = float(input("Enter the length: "))
    width: float = float(input("Enter the width: "))

    area: float = length * width
    perimeter: float = 2 * (length + width)

    print(f"Area: {area:.2f}")
    print(f"Permieter: {perimeter:.2f}")
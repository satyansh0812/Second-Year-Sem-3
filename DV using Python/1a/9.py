a = input("Enter first number: ")
b = input("Enter second number: ")

a = int(a)
b = int(b)

print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)

if b != 0:
    print("Division:", a / b)
else:
    print("Division is not possible")
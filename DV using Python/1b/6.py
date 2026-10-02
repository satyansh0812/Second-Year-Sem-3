a = input("Enter first number: ")
b = input("Enter second number: ")

a = int(a)
b = int(b)

print("Sum:", a + b)
print("Difference:", a - b)
print("Product:", a * b)
if b != 0:
    print("Quotient:", a / b)
else:
    print("Division not possible")
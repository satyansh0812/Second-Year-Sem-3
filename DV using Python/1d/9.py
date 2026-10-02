a = True
b = False

print("Before swapping:")
print("a =", a)
print("b =", b)

a = bool(a ^ b)
b = bool(a ^ b)
a = bool(a ^ b)

print("After swapping:")
print("a =", a)
print("b =", b)
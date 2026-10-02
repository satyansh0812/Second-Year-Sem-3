a = [10, 20, 30]
b = a

b[0] = 100

print("a:", a)
print("b:", b)

c = a.copy()
c[1] = 200

print("a:", a)
print("c:", c)
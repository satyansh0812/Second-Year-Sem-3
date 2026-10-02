a = [10, 20, 30]
print("Original list:", a)
print("ID before modification:", id(a))

a[0] = 100

print("Modified list:", a)
print("ID after modification:", id(a))

b = "Python"
print("Original string:", b)
print("ID before modification:", id(b))

b = b + " Programming"

print("Modified string:", b)
print("ID after modification:", id(b))
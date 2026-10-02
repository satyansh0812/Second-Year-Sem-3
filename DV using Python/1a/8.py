a = 100

print("Before deletion:", a)

del a

try:
    print("After deletion:", a)
except NameError:
    print("Error: Variable a does not exist")
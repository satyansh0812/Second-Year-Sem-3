import copy

original = [[1, 2], [3, 4]]

shallow = copy.copy(original)

deep = copy.deepcopy(original)

print("Original:", original)
print("Shallow copy:", shallow)
print("Deep copy:", deep)

original[0][0] = 100

print("\nAfter modifying original:")
print("Original:", original)
print("Shallow copy:", shallow)
print("Deep copy:", deep)
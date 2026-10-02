import numpy as np

matrix = np.array([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
])

print("Row 1: ")
print(matrix[0])

print("Row 2: ")
print(matrix[1])

print("Row 3: ")
print(matrix[2])

print("Column 1: ")
print(matrix[:, 0])

print("Column 2: ")
print(matrix[:, 1])

print("Column 3: ")
print(matrix[:, 2])

print("Original matrix: ")
print(matrix)
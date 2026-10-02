import numpy as np

A = np.array([
    [10, 12, 14, 16, 18],
    [20, 22, 24, 26, 28],
    [30, 32, 34, 36, 38],
    [40, 42, 44, 46, 48]
])

print("Thrid column: ")
print(A[:, 0])

A[3] = [1, 2, 3, 4, 5]

print(A)
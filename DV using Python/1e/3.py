import math

a = 0.1
b = 0.2

result = a + b

print("Result:", result)
print("Direct comparison:", result == 0.3)
print("Using math.isclose():", math.isclose(result, 0.3))
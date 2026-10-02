a = 10
b = 5
c = 2
d = 4

result = a + b * c ** 2 - d / 2

print("Without explicit parentheses:", result)

result = (a + (b * (c ** 2))) - (d / 2)

print("With explicit parentheses:", result)
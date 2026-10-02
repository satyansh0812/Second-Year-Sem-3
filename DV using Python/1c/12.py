def check():
    print("Function executed")
    return True

print("AND example:")
result = False and check()
print(result)

print("OR example:")
result = True or check()
print(result)
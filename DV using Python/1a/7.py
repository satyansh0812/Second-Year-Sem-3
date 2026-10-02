x = 10

def change():
    global x
    x = 50
    print("Inside function:", x)

print("Before function:", x)

change()

print("After function:", x)
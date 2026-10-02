def marks(*args):
    total = 0

    for mark in args:
        total = total + mark

    print("Total marks:", total)
    print("Number of subjects:", len(args))
    print("Average marks:", total / len(args))


marks(80, 75, 90, 85, 70)
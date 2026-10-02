read = 1
write = 2
delete = 4

permissions = read | write

print("Permissions:", permissions)

if permissions & read:
    print("Read access: Allowed")
else:
    print("Read access: Denied")

if permissions & delete:
    print("Delete access: Allowed")
else:
    print("Delete access: Denied")

permissions = permissions | delete
print("After adding delete:", permissions)

permissions = permissions & ~write
print("After removing write:", permissions)
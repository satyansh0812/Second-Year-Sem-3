inventory = {
    "laptop": 10,
    "mouse": 25,
    "keyboard": 15,
    "monitor": 8
}

print("Initial Inventory:", inventory)

inventory["headphones"] = 12
inventory["mouse"] = 30
del inventory["monitor"]

print("\nUpdated Inventory:")

for product, quantity in inventory.items():
    print(product, ":", quantity)

name = input("\nEnter product name to search: ")

if name in inventory:
    print("Available quantity:", inventory[name])
else:
    print("Product not found")
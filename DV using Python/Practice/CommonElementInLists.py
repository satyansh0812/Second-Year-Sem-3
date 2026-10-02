a = int(input("Enter no. of elements in list 1: "))
b = int(input("Enter no. of elements in list 2: "))

list1 = []
list2 = []
list3 = []

for i in range(a):
    x = int(input("Enter elements of list 1: "))
    list1.append(x)

for i in range(b):
    y = int(input("Enter elements of list 2: "))
    list2.append(y)

for x in list1:
    for y in list2:
        if(x == y):
            list3.append(x)

print("List 1: ", list1)
print("List 2: ", list2)
print("Common elements in both lists: ", list3)
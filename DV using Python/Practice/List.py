a = int(input("Enter no. of elements in the list: "))
numbers = []
pos = 0
neg = 0
zero = 0

print("Enter elements: ")
for i in range (a):
    x = int(input())
    numbers.append(x)

for x in numbers:
    if(x < 0):
        neg = neg + 1
    elif(x > 0):
        pos = pos + 1
    else:
        zero = zero + 1

print("List: ", numbers)
print("No. of positive elements: ", pos)
print("No. of negative elements: ", neg)
print("No. of zero elements: ", zero)
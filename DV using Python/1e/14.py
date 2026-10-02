marks = []

for i in range(10):
    m = float(input("Enter marks: "))
    marks.append(m)

highest = max(marks)
lowest = min(marks)
average = sum(marks) / len(marks)

print("Highest marks:", highest)
print("Lowest marks:", lowest)
print("Average marks:", average)
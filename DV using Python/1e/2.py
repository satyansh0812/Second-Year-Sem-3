m1 = float(input("Enter marks in subject 1: "))
m2 = float(input("Enter marks in subject 2: "))
m3 = float(input("Enter marks in subject 3: "))
m4 = float(input("Enter marks in subject 4: "))
m5 = float(input("Enter marks in subject 5: "))

total = m1 + m2 + m3 + m4 + m5
average = total / 5
percentage = (total / 500) * 100

print("Total:", total)
print("Average:", average)
print("Percentage:", percentage, "%")
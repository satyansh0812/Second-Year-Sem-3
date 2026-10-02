cgpa = float(input("Enter CGPA: "))
backlogs = int(input("Enter active backlogs: "))

if cgpa >= 7.0 and backlogs == 0:
    print("Eligible for placement")
else:
    print("Not eligible for placement")
students = {
    "student1": {
        "name": "Aman",
        "maths": 85,
        "physics": 88,
        "chemistry": 82
    },
    "student2": {
        "name": "Ravi",
        "maths": 78,
        "physics": 85,
        "chemistry": 80
    },
    "student3": {
        "name": "Priya",
        "maths": 92,
        "physics": 95,
        "chemistry": 89
    }
}

for student_id, details in students.items():
    print("Student:", student_id)
    print("Name:", details["name"])
    print("Maths:", details["maths"])
    print("Physics:", details["physics"])
    print("Chemistry:", details["chemistry"])
    print()
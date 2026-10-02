#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
    int id;
    string name;
    float salary;

    public:
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    void updateSalary(float updatedSalary) {
        salary = updatedSalary;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(101, "Satyansh", 65000);
    Employee e2(e1);

    e2.updateSalary(75000);

    e1.display();
    cout << endl;
    e2.display();
}
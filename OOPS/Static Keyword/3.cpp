#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
    int id;
    string name;
    int salary;
    static int temp;

    public:
    Employee(int s, string n) {
        name = n;
        salary = s;
        id = temp;
        temp++;
    }

    void display() {
        cout << "Employee name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee salary: " << salary << endl;
        cout << endl;
    }
};

int Employee :: temp = 101;

int main() {
    Employee e1(50000, "Satyansh");
    Employee e2(65000, "Saurabh");
    e1.display();
    e2.display();
}
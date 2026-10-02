#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
    int roll;
    string name;
    float marks;

    public:
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(32, "Satyansh", 45.6);
    Student s2(s1);

    s1.display();
    s2.display();
}
#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
    int roll;
    string name;
    float m1, m2, m3;

    public:
    Student(int r, string n, float x, float y, float z) {
        roll = r;
        name = n;
        m1 = x;
        m2 = y;
        m3 = z;
    }

    Student(const Student &s) {
        name = s.name;
        roll = s.roll;
        m1 = s.m1;
        m2 = s.m2;
        m3 = s.m3;
    }

    void updateMarks(float a, float b, float c) {
        m1 = a;
        m2 = b;
        m3 = c;
    }

    void display() {
        cout << "Roll no.: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << endl;
    }
};

int main() {
    Student s1(101, "Satyansh", 99.7, 96.6, 94.6);
    Student s2(s1);

    s2.updateMarks(97.7, 99.6, 95.3);

    s1.display();
    cout << endl;
    s2.display();
}
#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
    static string college;
    int roll;
    string name;

    public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << roll << endl;
        cout << "College: " << college << endl;
        cout << endl;
    }
};
string Student :: college = "ABES Engineering College";

int main() {
    Student s1(101, "Satyansh");
    Student s2(102, "Saurabh");
    s1.display();
    s2.display();
}
#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
    int roll;
    string name;
    static int count;

    public:
    Student(int r, string n) {
        roll = r;
        name = n;
        count++;
    }

    void display() {
        cout << "Roll no.: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << endl;
    }

    void counter() {
        cout << "Total students: " << count << endl; 
    }
};

int Student :: count = 0;

int main() {
    Student s1(101, "Satyansh");
    Student s2(102, "Shaurya");
    Student s3(103, "Shivam");
    s1.display();
    s2.display();
    s3.display();
    s3.counter();
}
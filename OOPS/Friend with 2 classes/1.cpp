#include <bits/stdc++.h>
using namespace std;

class student1;
class student2;

class student1 {
    private:
    int marks1;

    public:
    void get() {
        cout << "Enter marks of first student: ";
        cin >> marks1;
    }

    friend void higher(student1 s1, student2 s2);
};

class student2 {
    private: 
    int marks2;

    public:
    void get() {
        cout << "Enter marks of second student: ";
        cin >> marks2;
    }

    friend void higher(student1 s1, student2 s2);
};

void higher(student1 s1, student2 s2) {
    if(s1.marks1 > s2.marks2) {
        cout << "Student 1 scored higher marks\n";
    }
    else if(s1.marks1 < s2.marks2) {
        cout << "Student 2 scored higher marks\n";
    }
    else {
        cout << "Both students scored equal marks\n";
    }
}

int main() {
    student1 s1;
    student2 s2;

    s1.get();
    s2.get();

    higher(s1, s2);
}
#include <bits/stdc++.h>
using namespace std;

class Student {
    
    public:
    int roll;
    string name;
    int marks[3];

    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout <<"Enter marks in three subjects: ";
        for (int i=0; i<3; i++) {
            cin >> marks[i];
        }
    }

    void display() {
        cout << "Roll number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in three subjects: ";
        for (int i=0; i<3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    void cal_per() {
        int total = 0;
        for (int i=0; i<3; i++) {
            total = total + marks[i];
        }
        float percentage = (total/300.0) * 100;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main () {
    Student s;
    s.input();
    s.display();
    s.cal_per();
}
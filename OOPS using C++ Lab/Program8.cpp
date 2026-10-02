#include <bits/stdc++.h>
using namespace std;

class student {
    private:
    int roll;
    string name;
    int marks;

    public:
    void get() {
        cout << "Name: ";
        cin >> name;

        cout <<"Roll no.: ";
        cin >> roll;

        cout << "Marks: ";
        cin >> marks;
    }

    student higherMarks(student s) {
        if(marks > s.marks) {
            return *this;
        }
        else if(marks < s.marks) {
            return s;
        }
    }

    void details() {
        cout << name << ", with roll no. " << roll << " has scored higher marks" << endl;
        cout << "Score: " << marks << endl;
    }
};

int main() {
    student s1, s2, s3;

    cout << "Enter details of Student 1: \n";
    s1.get();

    cout << endl;

    cout << "Enter details of Student 2: \n";
    s2.get();

    s3 = s1.higherMarks(s2);
    s3.details();
}
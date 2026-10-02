#include <bits/stdc++.h>
using namespace std;

class student {
    public:
    string name;
    int marks;

    void check(student S) {
        if(marks > S.marks) {
            cout << name << " scored more marks\n";
        }
        else if(S.marks > marks) {
            cout << S.name << " scored more marks\n";
        }
        else {
            cout << "Both students scored equal marks\n";
        }
    }
};

int main() {
    student s1, s2;

    cin >> s1.name >> s1.marks;
    cin >> s2.name >> s2.marks;

    s1.check(s2);
}
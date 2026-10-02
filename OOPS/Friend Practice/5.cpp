#include <bits/stdc++.h>
using namespace std;

class student {
    private:
    string name;
    int marks;

    public:
    void input(string s, int n) {
        name = s;
        marks = n;
    }

    friend void great(student S1, student S2);
};

void great(student S1, student S2) {
    if(S1.marks > S2.marks) {
        cout << S1.name << " has scored more marks" << endl;
    }
    else if(S1.marks < S2.marks) {
        cout << S2.name << " has scored more marks" << endl;
    }
    else {
        cout << "Both students scored equal marks" << endl;
    }
}

int main() {
    student S1, S2;

    string s1, s2;
    cout << "Enter names: ";
    cin >> s1 >> s2;

    int a, b;
    cout << "Enter marks: ";
    cin >> a >> b;

    S1.input(s1, a);
    S2.input(s2, b);

    great(S1, S2);
}
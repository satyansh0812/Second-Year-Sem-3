#include <bits/stdc++.h>
using namespace std;

class student {
    private:
    double m1;
    double m2;
    double m3;

    public:
    void input(double x, double y, double z) {
        m1 = x;
        m2 = y;
        m3 = z;
    }

    friend void average(student S);
};

void average(student S) {
    double avg = (S.m1 + S.m2 + S.m3)/3;
    cout << "Average marks: " << avg << endl;
}

int main() {
    student S;
    double a,b,c;
    cout << "Enter marks of three subjects: ";
    cin >> a >> b >> c;

    S.input(a,b,c);
    average(S);
}
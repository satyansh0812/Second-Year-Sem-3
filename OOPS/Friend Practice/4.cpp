#include <bits/stdc++.h>
using namespace std;

class rectangle {
    private: 
    double length;
    double breadth;

    public:
    void input(double a, double b) {
        length = a;
        breadth = b;
    }
    friend void area(rectangle R);
};

void area(rectangle R) {
    double a = R.length * R.breadth;
    cout << "Area of rectangle is: " << a << endl;
}

int main() {
    rectangle R;
    double p,q;
    cout << "Enter length and breadth: ";
    cin >> p >> q;

    R.input(p,q);
    area(R);
}
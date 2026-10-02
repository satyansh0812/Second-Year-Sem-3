#include <bits/stdc++.h>
using namespace std;

class Distance {
    public:
    double inches;
    double feet;

    void input() {
        cout << "Enter distance (in inches): ";
        cin >> inches;

        cout << "Enter distance (in feet): ";
        cin >> feet;
    }

    void calculate(Distance d1) {
        inches += d1.inches;
        feet += d1.feet;
    }

    void display() {
        cout << "Your calculated distance (inches): " << inches << endl;
        cout << "Your calculated distance (in feet): " << feet << endl;
    }
};

int main() {
    Distance d1,d2;
    d1.input();
    d2.input();
    d1.calculate(d2);
    d1.display();
}
#include <bits/stdc++.h>
using namespace std;

class point1;
class point2;

class point1 {
    private:
    int x, y;
    
    public:
    void get() {
        cout << "Enter coordinates of first point: ";
        cin >> x >> y;
    }

    friend void dist(point1 p1, point2 p2);
};

class point2 {
    private:
    int x, y;

    public:
    void get() {
        cout << "Enter coordinates of second point: ";
        cin >> x >> y;
    }

    friend void dist(point1 p1, point2 p2);
};

void dist(point1 p1, point2 p2) {
    int one = pow(p1.x - p2.x, 2);
    int two = pow(p1.y - p2.y, 2);

    double d = sqrt(one + two);

    cout << "Distance between the two points is: " << d << endl;
}

int main() {
    point1 p1;
    point2 p2;

    p1.get();
    p2.get();

    dist(p1, p2);
}
#include <bits/stdc++.h>
using namespace std;

class point {
    private:
    int x, y;

    public:
    void input(int a, int b) {
        x = a;
        y = b;
    }

    friend void calculateDistance(point p1, point p2);
};

void calculateDistance(point p1, point p2) {
    int l = pow(p2.x - p1.x, 2);
    int m = pow(p2.y - p1.y, 2);
    double dist = sqrt(l+m);

    cout << "Distance between the points is: " << dist << endl;
}

int main() {
    point p1, p2;
    int p,q,r,s;

    cout << "Enter co-ordinates of first point: ";
    cin >> p >> q;
    p1.input(p, q);

    cout << "Enter co-ordinates of second point: ";
    cin >> r >> s;
    p2.input(r, s);

    calculateDistance(p1, p2);
}
#include <bits/stdc++.h>
using namespace std;

class number {
    private:
    int a, b, c;

    public:
    void input(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    friend void largest(number N);
};

void largest(number N) {
    int largestNumber = max(max(N.a, N.b), N.c);
    cout << "Largest number is: " << largestNumber << endl;
}

int main() {
    number N;
    int p,q,r;
    cout << "Enter 3 numbers: ";
    cin >> p >> q >> r;

    N.input(p,q,r);
    largest(N);
}
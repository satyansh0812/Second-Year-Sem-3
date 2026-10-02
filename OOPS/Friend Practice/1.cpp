#include <bits/stdc++.h>
using namespace std;

class number {
    private:
    int a;
    int b;

    public:
    void input(int x, int y) {
        a = x;
        b = y;
    }

    friend void sum(number n);
};

void sum(number n) {
    cout << "Sum: " << n.a + n.b << endl;
}

int main() {
    number N;
    int p,q;
    cout << "Enter numbers: ";
    cin >> p >> q;
    N.input(p,q);
    sum(N);
}
#include <bits/stdc++.h>
using namespace std;

class number {
    private:
    int a;

    public:
    void input(int n) {
        a = n;
    }

    int get() {
        return a;
    }

    friend void swapNumber(number &n1, number &n2);
};

void swapNumber(number &n1, number &n2) {
    int t = n1.a;
    n1.a = n2.a;
    n2.a = t;
}

int main() {
    number n1, n2;
    int l,m;

    cout << "Enter first number: ";
    cin >> l;
    n1.input(l);

    cout << "Enter second number: ";
    cin >> m;
    n2.input(m);

    cout << "Before updation: num1 = " << n1.get() << " and num2 = " << n2.get() << endl;

    swapNumber(n1, n2);

    cout << "After updation: num1 = " << n1.get() << " and num2 = " << n2.get() << endl;
}
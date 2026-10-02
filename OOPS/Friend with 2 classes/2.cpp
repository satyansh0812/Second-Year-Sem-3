#include <bits/stdc++.h>
using namespace std;

class bank1;
class bank2;

class bank1 {
    private:
    int balance1;

    public:
    void get() {
        cout << "Enter bank balance 1: ";
        cin >> balance1;
    }

    friend void compare(bank1 b1, bank2 b2);
};

class bank2 {
    private:
    int balance2;

    public:
    void get() {
        cout << "Enter bank balance 2: ";
        cin >> balance2;
    }

    friend void compare(bank1 b1, bank2 b2);
};

void compare(bank1 b1, bank2 b2) {
    if(b1.balance1 > b2.balance2) {
        cout << "Balance 1 is greater\n";
    }
    else if(b1.balance1 < b2.balance2) {
        cout << "Balance 2 is greater\n";
    }
    else {
        cout << "Both the balances are same\n";
    }
}

int main() {
    bank1 b1;
    bank2 b2;

    b1.get();
    b2.get();

    compare(b1, b2);
}
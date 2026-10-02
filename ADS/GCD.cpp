#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    int r = a%b;
    if (r == 0) {
        return b;
    }
    else {
        return GCD(b,r);
    }
}

int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD: " << GCD(a,b);
}
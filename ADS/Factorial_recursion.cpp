#include <bits/stdc++.h>
using namespace std;

int factorial (int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = factorial(n);
    cout << "Factorial of " << n << " is: " << a << endl;
    return 0;
}
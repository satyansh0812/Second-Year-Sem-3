#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n+f(n-1);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of all numbers from 1 to " << n << " is: " << f(n) << endl;
    return 0;
}
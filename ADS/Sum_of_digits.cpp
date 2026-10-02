#include <bits/stdc++.h>
using namespace std;

int sumofDigits(int n) {
    if(n == 0) {
        return 0;
    }
    else {
        return (n%10) + sumofDigits(n/10);
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits: " << sumofDigits(n) << endl;
    return 0;
}
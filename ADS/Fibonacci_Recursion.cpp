#include <iostream>
using namespace std;

int fibonacci(int n, int a = 0, int b = 1) {
    if (n == 0) {
        return a;
    }
    if(n == 1) {
        return b;
    }
    return fibonacci(n - 1, b, a + b);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Nth term of fibonacci series: " << fibonacci(n) << endl;

    return 0;
}
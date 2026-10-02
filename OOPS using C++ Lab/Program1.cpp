#include <bits/stdc++.h>
using namespace std;

// Call by value
void swap_value (int a, int b) {
    int t = a;
    a = b;
    b = t;
}

// //Call by reference
void swap_reference (int &a, int &b) {
    int t = a;
    a = b;
    b = t;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
}

//Call by address
void swap_address (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    cout << "After swapping: a = " << *a << ", b = " << *b << endl;

}

int main () {
    int a = 2;
    int b = 3;
    cout <<"Before swapping: a = " << a << ", b = " << b << endl;
    // swap_value(a, b);
    // cout << "After swapping: a = " << a << ", b = " << b << endl;
    // swap_reference(a, b);
    swap_address(&a, &b);
}
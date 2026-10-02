#include <bits/stdc++.h>
using namespace std;

inline int add(int a,  int b) {              //Inline function
    int res = a+b;
    return res;
}

int diff1(int a=20, int b=10) {             //Default argument case 1
    int d = a-b;
    return d;
}

int diff2(int a, int b=10) {                //Default argument case 2
    int d = a-b;
    return d;
}

// int diff3(int a=10, int b) {                //Default argument case 3
//     int d = a-b;
//     return d;
// }

int product(int a, int b) {                 //Function overloading case 1
    int p = a*b;
    return p;
}

int product(int a, int b, int c) {          //Function overloading case 2
    int p = a*b*c;
    return p;
}

double product(double a, double b) {        //Function overloading case 3
    double p = a*b;
    return p;
}

int main () {
    int m = 45, n = 30;

    int z = add(4,5);
    cout << z << endl;

    int t = diff1(m,n);
    cout << t << endl;

    int u = diff2(m);
    cout << u << endl;

    double v = product(4.0,5.0);
    cout << v << endl;

    int w = product(4,5,6);
    cout <<  w << endl;
}
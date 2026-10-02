#include <bits/stdc++.h>
using namespace std;

int q[100];
int r = 0, f = 0;

void add (int x) {
    if(r == -1) {
        cout << "Vacant" << endl;
    }
    else {
        q[r] = x;
        r++;
    }
}

void del() {
    cout << q[f] << endl;
    f++;
}

void display() {
    for (int i=f; i<r; i++) {
        cout << q[i] << " ";
    }
}

int main() {
    add(10);
    add(20);
    del();
    display();
    return 0;
}
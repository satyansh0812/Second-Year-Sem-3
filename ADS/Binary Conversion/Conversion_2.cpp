#include <bits/stdc++.h>
using namespace std;

int s[100];
int n = 100;
int i = 0;

void push(int a) {
    s[i] = a;
    i++;
}

void pop() {
    i--;
    s[i] = -1;
}

void peek() {
    i--;
    cout << s[i] << " ";
    i++;
}

void display () {
    for (int j=n-1; j>=0; j--) {
        if (s[j] != -1) {
            cout << s[j] << " ";
        }
    }
}

int main () {
    for (int j=0; j<n; j++) {
        s[j] = -1;
    }

    int x;
    cout << "Enter a number: ";
    cin >> x;

    while(x>0) {
        int r = x%8;
        push(r);
        x = x/8;
    }
    display();
}
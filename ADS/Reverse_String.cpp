#include <bits/stdc++.h>
using namespace std;

char s[100];
int n = 100;
int i = 0;

void push(char a) {
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
            cout << s[j];
        }
    }
}

int main () {
    for (int j=0; j<n; j++) {
        s[j] = -1;
    }

    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    for (int j=0; j<s.length(); j++) {
        push(s[j]);
    }

    cout << "Reversed string: ";
    display();
}
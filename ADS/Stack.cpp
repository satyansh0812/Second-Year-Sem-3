#include <bits/stdc++.h>
using namespace std;

int s[100];
int n = 100;
int i = 0;

void push() {
    if (i == n) {
        cout << "Stack overflow" << endl;
        return;
    }
    int input;
    cin >> input;
    s[i] = input;
    i++;
}

void pop() {
    if (i == 0) {
        cout << "Stack underflow" << endl;
        return;
    }
    i--;
    s[i] = -1;
}

void peek() {
    if (i == 0) {
        cout << "Stack is empty" << endl;
        return;
    }
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
    cout << endl;
}

int main () {
    for (int j=0; j<n; j++) {
        s[j] = -1;
    }

    int choice;
    cout << "Enter your choice (1: push, 2: pop, 3: peek, 4: display, 0: exit): ";
    cin >> choice;

    while (choice != 0) {
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        cout << "Enter your choice (1: push, 2: pop, 3: peek, 4: display, 0: exit): ";
        cin >> choice;
    }

    return 0;
}
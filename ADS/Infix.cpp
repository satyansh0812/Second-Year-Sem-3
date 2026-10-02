#include <bits/stdc++.h>
using namespace std;

char st[100];
int m = 100;
int i = 0;

void push(char x) {
    st[i] = x;
    i++;
}

void pop() {
    i--;
    st[i] = -1;
}

void top() {
    if (i>0) {
        i--;
        cout << st[i] << " ";
    }
}

void display () {
    for (int j=m-1; j>=0; j--) {
        if (st[j] != -1) {
            cout << st[j] << " ";
        }
    }
}

int main () {
    // string infix = "(A+B)*(C-D)";
    string infix;
    cout << "Enter infix expression (don't use spaces): ";
    cin >> infix;
    int n = infix.length();
    string postfix = "";

    for (int j=0; j<n; j++) {
        if (isalpha(infix[j])){
            postfix += infix[j];
        }
        else if (infix[j] == ')') {
            while (i > 0 && st[i-1] != '(') {
                postfix += st[i-1];
                i--;
            }
            if (i > 0) {
                i--;
            }
        }
        else if (infix[j] == '+' || infix[j] == '-' || infix[j] == '*' || infix[j] == '/' || infix[j] == '^' || infix[j] == '%') {
            push(infix[j]);
        }
    }
    while( i > 0) {
        postfix += st[i-1];
        i--;
    }
    cout << "Postfix Conversion: " << postfix << endl;
}
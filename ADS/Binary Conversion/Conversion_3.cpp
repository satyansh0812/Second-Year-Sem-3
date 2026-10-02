#include <bits/stdc++.h>
using namespace std;

char s[100];
int n = 100;
int i = 0;

void push(int a) {
    if(i == n-1) {
        cout << "Stack Overflow" << endl;
    }
    else if(a == 10) {
        s[i] = 'A';
        i++;
    }
    else if(a == 11) {
        s[i] = 'B';
        i++;
    }
    else if(a == 12) {
        s[i] = 'C';
        i++;
    }
    else if(a == 13) {
        s[i] = 'D';
        i++;
    }
    else if(a == 14) {
        s[i] = 'E';
        i++;
    }
    else if(a == 15) {
        s[i] = 'F';
        i++;
    }
    else {
        s[i] = a + '0';
    }
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

int main() {
    for (int j=0; j<n; j++) {
        s[j] = -1;
    }

    int x;
    cout << "Enter a number: ";
    cin >> x;

    while(x>0) {
        int r = x%16;
        push(r);
        x=x/16;
    }
    display();
}
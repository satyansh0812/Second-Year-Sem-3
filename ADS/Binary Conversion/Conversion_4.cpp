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
    else if(a == 16) {
        s[i] = 'G';
        i++;
    }
    else if(a == 17) {
        s[i] = 'H';
        i++;
    }
    else if(a == 18) {
        s[i] = 'I';
        i++;
    }
    else if(a == 19) {
        s[i] = 'J';
        i++;
    }
    else if(a == 20) {
        s[i] = 'K';
        i++;
    }
    else if(a == 21) {
        s[i] = 'L';
        i++;
    }
    else if(a == 22) {
        s[i] = 'M';
        i++;
    }
    else if(a == 23) {
        s[i] = 'N';
        i++;
    }
    else if(a == 24) {
        s[i] = 'O';
        i++;
    }
    else if(a == 25) {
        s[i] = 'P';
        i++;
    }
    else if(a == 26) {
        s[i] = 'Q';
        i++;
    }
    else if(a == 27) {
        s[i] = 'R';
        i++;
    }
    else if(a == 28) {
        s[i] = 'S';
        i++;
    }
    else if(a == 29) {
        s[i] = 'T';
        i++;
    }
    else if(a == 30) {
        s[i] = 'U';
        i++;
    }
    else if(a == 31) {
        s[i] = 'V';
        i++;
    }
    else if(a == 32) {
        s[i] = 'W';
        i++;
    }
    else if(a == 33) {
        s[i] = 'X';
        i++;
    }
    else if(a == 34) {
        s[i] = 'Y';
        i++;
    }
    else if(a == 35) {
        s[i] = 'Z';
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

    int base;
    cout << "Enter base to convert: ";
    cin >> base;

    while(x>0) {
        int r = x%base;
        push(r);
        x=x/base;
    }
    display();
}
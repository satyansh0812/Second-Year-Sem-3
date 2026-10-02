//IMPLEMENTATION OF 2 STACKS USING SINGLE ARRAY

#include <bits/stdc++.h>
using namespace std;

int arr[20];
int n = 100;
int i = 0;
int top1 = -1;
int top2 = 20;

void push1(int x) {
    top1++;
    arr[top1] = x;
}

void push2(int x) {
    top2--;
    arr[top2] = x;
}

void pop1() {
    cout << arr[top1];
    top1--;
}

void pop2() {
    cout << arr[top2];
    top2++;
}

void display1() {
    for(int j=top1; j>=0; j--) {
        cout << arr[j] << " ";
    }
}

void display2() {
    for(int j=top2; j<20; j++) {
        cout << arr[j] << " ";
    }
}

int main () {
    int l,m;
    cout << "Enter no. of elements in stack 1: ";
    cin >> l;

    cout << "Enter no. of elements in stack 2: ";
    cin >> m;

    if(l+m <= 20) {
        int a[l];
        cout << "Enter elements for stack 1: ";
        for(int j=0; j<l; j++) {
            cin >> a[j];
            push1(a[j]);
        }
        
        int b[m];
        cout << "Enter elements for stack 2: ";
        for (int j=0; j<m; j++) {
            cin >> b[j];
            push2(b[j]);
        }
    }
    else {
        cout << "No. of elements is greater than array size!";
    }

    cout << "Stack 1: ";
    display1();

    cout << endl;

    cout << "Stack 2: ";
    display2();
}
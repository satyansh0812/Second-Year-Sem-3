//MINIMUM AND MAXIMUM ELEMENT IN STACK

#include <bits/stdc++.h>
using namespace std;

int st[100];
int n = 100;
int i = 0;

void push(int x) {
    st[i] = x;
    i++;
}

void pop() {
    i--;
    st[i] = -1;
}

int main() {
    int m;
    cout << "Enter no. of elements: ";
    cin >> m;

    int arr[m];
    cout  <<"Enter elements: ";
    for (int j=0; j<m; j++) {
        cin >> arr[j];
        push(arr[j]);
    }

    int max = st[0];
    int min = st[0];

    for (int j=1; j<m; j++) {
        if(st[j] < min) {
            min = st[j];
        }

        if(st[j] > max) {
            max = st[j];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
}
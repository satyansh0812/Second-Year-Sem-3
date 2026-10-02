#include<bits/stdc++.h>
using namespace std;

void insert (int a[], int n) {
    int x;
    cout << "Enter value to insert: ";
    cin >> x;
    
    int pos;
    cout << "Enter position: ";
    cin >> pos;
    
    for (int i=n; i>=pos; i--) {
        a[i] = a[i-1];
    }
    a[pos-1] = x;
}

void del(int a[], int n) {
    int d;
    cout << "Enter element to delete: ";
    cin >> d;

    int pos = -1;

    for (int i=0; i<n; i++) {
        if (a[i] == d) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << "Element not found" << endl;
        return;
    }

    for (int i=pos; i<n; i++) {
        a[i] = a[i+1];
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    int a[n+1];
    cout << "Enter elements: ";
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    insert(a,n);
    
    for (int i=0; i<=n; i++) {
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    del(a,n);
    
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}
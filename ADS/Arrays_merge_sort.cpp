#include <bits/stdc++.h>
using namespace std;

void display (int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

void input(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
}

void sorting (int arr[], int size) {
    for(int i=0; i<=size-2; i++) {
        for(int j=0; j<size-i; j++) {
            if(arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

void merge (int arr1[], int arr2[], int size1, int size2, int arr[]) {
    int i=0, j=0, k=0;
    while(i<size1 && j<size2) {
        if(arr1[i] < arr2[j]) {
            arr[k] = arr1[i];
            i++;
        }
        else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < size1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < size2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

int main () {
    int n,m;
    cin >> n >> m;

    int a[n], b[m];

    input(a,n);
    input(b,m);

    sorting(a,n);
    sorting(b,m);

    int arr[m+n];

    merge(a,b,n,m,arr);

    display(arr,n+m);
}
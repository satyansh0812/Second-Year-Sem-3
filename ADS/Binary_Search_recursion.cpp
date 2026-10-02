#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int binary_search(int a[], int l, int e, int k) {
    int m = (l+e)/2;
    if(l > e) {
        return -1;
    }
    else if(a[m] == k) {
        return 1;
    }
    else if(a[m] > k) {
        return binary_search(a, l, m-1, k);
    }
    else if(a[m] < k) {
        return binary_search(a, m+1, e, k);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int l = 0;
    int e = n-1;
    int k;
    cout << "Enter no. to be searched: ";
    cin >> k;

    sorting(arr,n);
    int ans = binary_search(arr, l, e, k);

    if(ans == 1) {
        cout << "Element found";
    }
    else {
        cout << "Element not found";
    }
}
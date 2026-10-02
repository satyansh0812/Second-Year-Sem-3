#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int size1, int size2, int arr[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr[k] = arr1[i];
            i++;
        }
        else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int n) {
    if (n <= 1)
        return;

    int size1 = n / 2;
    int size2 = n - size1;

    int arr1[size1];
    int arr2[size2];

    for (int i = 0; i < size1; i++)
        arr1[i] = arr[i];

    for (int i = 0; i < size2; i++)
        arr2[i] = arr[size1 + i];

    mergeSort(arr1, size1);
    mergeSort(arr2, size2);

    merge(arr1, arr2, size1, size2, arr);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
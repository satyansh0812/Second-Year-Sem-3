#include <iostream>
using namespace std;

int partition(int arr[], int l, int h) {
    int pivot = arr[h];
    int i = l - 1;

    for (int j = l; j < h; j++) {
        if (arr[j] < pivot) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[h];
    arr[h] = temp;

    return i + 1;
}

void quickSort(int arr[], int l, int h) {
    if (l < h) {
        int p = partition(arr, l, h);

        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
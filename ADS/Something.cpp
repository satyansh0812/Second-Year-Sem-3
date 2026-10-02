#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of elements: ";
    cin >> n;

    vector<int>a(n);
    cout << "Enter elements: ";
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        a[i] = abs(x);
    }

    sort(a.begin(), a.end());

    cout << "Product: " << a[n-1] * a[n-2] << endl;
}
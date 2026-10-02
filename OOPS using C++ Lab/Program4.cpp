#include <bits/stdc++.h>
using namespace std;

int main () {
    int arr[] = {1,2,3,4,5};

    //Normal for loop
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }

    cout <<  endl;

    //Range based for loop
    for(int x : arr) {
        cout << x << " ";
    }

    cout << endl;
    
    //Range based for loop using auto keyword
    for (auto x: arr) {
        cout << x << " ";
    }
}
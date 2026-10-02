#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            if (i <= j) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    for(int i=4; i>=0; i--) {
        for (int j=4; j>=0; j--) {
            if(i >= j) {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
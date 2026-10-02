#include <bits/stdc++.h>
using namespace std;

int palindrome(string s, int l, int e) {
    if(l >= e) {
        return -1;
    }
    else if(s[l] != s[e]) {
        return 1;
    }
    else {
        return palindrome(s, l+1, e-1);
    }
}

int main () {
    string s;
    cin >> s;

    int l = 0;
    int e = s.length() - 1;

    int ans = palindrome(s, l, e);

    if(ans == -1) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}
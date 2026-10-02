//PARENTHISIS EVALUATION USING STACK

#include <bits/stdc++.h>
using namespace std;

char st[100];
int n = 100;
int i = 0;

void push(char x) {
    if(x == '(') {
        st[i] = x;
        i++;
    }
}

void pop() {
   i--;
   st[i] = -1;
}

bool empty() {
    if (i==0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    bool invalid = false;

    for(int j=0; j<n; j++) {
        st[j] = -1;
    }

    for (int j=0; j<s.length(); j++) {
        if(s[j] == '(') {
            push('(');
        }
        else if(empty() && s[j] == ')') {
            invalid = true;
            break;
        }
        else if (s[j] == ')'){
            pop();
        }
    }

    if(invalid) {
        cout << "Invalid";
    }
    else if(empty()) {
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }
}
#include <bits/stdc++.h>
using namespace std;

char s[100];
int n = 100;
int i=0;

void push(char a) {
    if(i < n) {
        s[i] = a;
        i++;
    }
}

char pop() {
    if(i > 0) {
        i--;
        return s[i];
    }
    return '\0';
}

void peek() {
    if(i > 0) {
        cout << s[i-1] << " ";
    }
}

void display() {
    for(int j=i-1; j>=0; j--) {
        cout << s[j] << " ";
    }
}

int main () {
    string str;
    string rev= "";
    cout << "Enter a string: ";
    getline(cin,str);

    for(int j=0; j<str.length(); j++) {
        push(str[j]);
    }

    while(i>0) {
        rev += pop();
    }

    if(rev == str) {
        cout << "String is a palindrome" << endl;
    }
    else {
        cout << "String is not a palindrome" << endl;
    }
}
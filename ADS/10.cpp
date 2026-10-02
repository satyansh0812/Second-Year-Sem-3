//POSTFIX EVALUATION

#include <bits/stdc++.h>
using namespace std;

int st[100];
int n = 100;
int i = 0;

void push(int x) {
    st[i] = x;
    i++;
}

int pop() {
    i--;
    int x = st[i];
    st[i] = -1;
    return x;
}

void display() {
    for (int j=n-1; j>=0; j--) {
        if(st[j] != -1) {
            cout << st[j] << " ";
        }
    }
}

int main () {
for (int j=0; j<n; j++) {
    st[j] = -1;
}

    string s;
    cout << "Enter the expression: ";
    getline(cin,s);

    for(int j=0; j<s.size(); j++) {
        if(s[j] == ' ') {
            continue;
        }

        if(s[j] >= 48 && s[j] <= 57) {
            push(s[j] - '0');
        }
        
        else if(s[j] == '+' || s[j] == '-' || s[j] == '*' || s[j] == '/' || s[j] == '%') {
            int a = pop();
            int b = pop();

            int result;

            if(s[j] == '+') {
                result = a+b;
            }
            else if(s[j] == '-') {
                result = a-b;
            }
            else if(s[j] == '*') {
                result = a*b;
            }
            else if(s[j] == '/') {
                result = a/b;
            }
            else if(s[j] == '%') {
                result = a%b;
            }

            push(result);
        }
    }

    display();

}
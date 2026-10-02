#include <bits/stdc++.h>
using namespace std;

class theory;
class practical;

class theory {
    private:
    int tmarks;

    public:
    void get() {
        cout << "Enter the marks of theory: ";
        cin >> tmarks;
    }
};

class practical {
    private:
    int pmarks;

    public:
    void get() {
        cout << "Enter the marks of practical: ";
        cin >> pmarks;
    }
};
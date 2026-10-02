#include <bits/stdc++.h>
using namespace std;

class Time {
    public:
    int hours;
    int minutes;
    int seconds;

    void input(Time t1) {
        cout << "Enter time: ";
        cin >> t1.hours >> t1.minutes >> t1.seconds;

        if(t1.minutes > 60 || t1.seconds > 60) {
            cout << "Invalid time";
        }
    }

    void sum(Time t1, Time t2) {
        int a=0, b=0, c=0;

        c = t1.seconds + t2.seconds;
        b = t1.minutes + t2.minutes;
        a = t1.hours + t2.hours;

        if(c > 60) {
            b += (c/60);
            c = c%60;
        }

        if(b > 60) {
            a += (b/60);
            b = b%60;
        }

        cout << a << " " << b << " " << c;
    }
};

int main() {
    Time t1, t2;

    t1.input(t1);
    t2.input(t2);
    t1.sum(t1,t2);
}
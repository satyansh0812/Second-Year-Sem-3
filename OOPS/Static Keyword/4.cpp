//An organization maintains employee attendance. Create a employee class containing employee id, employee
//name and days present. The class should maintain total employees and total attendance record.

#include <bits/stdc++.h>
using namespace std;

class Employee {
    private:
    int empID;
    string name;
    int present;
    static int employees;
    int total;
    int days;
    double attendance;

    public:
    void get(string n, int i, int d, int t) {
        employees++;
        name = n;
        empID = i;
        days = d;
        total = t;
        attendance = (days/total)*100;
    }

    void present() {
        days++;
        total++;
    }
};

int Employee :: employees = 0;
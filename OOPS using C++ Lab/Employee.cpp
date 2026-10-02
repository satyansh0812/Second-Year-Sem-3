#include <bits/stdc++.h>
using namespace std;

class employee {
    private:
    int emp_id;
    string emp_name;
    double m1, m2, m3, m4, m5, total=0, average=0;
    string grade;

    public:
    void get() {
        cout << "Name: ";
        cin >> emp_name;

        cout << "ID: ";
        cin >> emp_id;

        cout << "Marks: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void score() {
        total = m1+m2+m3+m4+m5;
        average = total/5;

        if(average > 91) {
            grade = 'A';
        }
        else if(average > 81) {
            grade = 'B';
        }
        else if(average > 71) {
            grade = 'C';
        }
        else {
            grade = 'D';
        }

        cout << emp_name << " has a total score of: " << total << endl;
        cout << emp_name << " has an average score of: " << average << endl;
        cout << "Grade awarded: " << grade << endl;
    }

    // employee compare(employee e) {
    //     if(average > e.average) {
    //         return *this;
    //     }
    //     else if(average < e.average) {
    //         return e;
    //     }
    // }

    void details() {
        cout << emp_name << " scored better with EMP ID: " << emp_id << " and score: " << average << " and grade: " << grade << endl;
    }

    employee best_emp(employee e1, employee e2, employee e3) {
        employee best;

        e1.score();
        e2.score();
        e3.score();

        int mx = max(e1.average, max(e2.average, e3.average));

        if(mx == e1.average) {
            best = e1;
        }
        else if(mx == e2.average) {
            best = e2;
        }
        else if(mx == e3.average) {
            best = e3;
        }

        return best;
    }
};

int main() {
    employee e1, e2, e3, best;

    cout << "Enter details of Employee 1: \n";
    e1.get();

    cout << "Enter details of Employee 2: \n";
    e2.get();

    cout << "Enter details of Employee 3: \n";
    e3.get();

    best = best.best_emp(e1,e2,e3);
    best.details();
}
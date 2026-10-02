#include <bits/stdc++.h>
using namespace std;

class Result {
    private:
    int roll;
    string name;
    float m1, m2, m3, total, percent;

    public:
    Result(int r, string n, float x, float y, float z) {
        roll = r;
        name = n;
        m1 = x;
        m2 = y;
        m3 = z;
    }

    Result(const Result &r) {
        roll = r.roll;
        name = r.name;
        m1 = r.m1;
        m2 = r.m2;
        m3 = r.m3;
    }

    void updateMarks(float a, float b, float c) {
        m1 = a;
        m2 = b;
        m3 = c;
    }

    void calculateTotal() {
        total = m1 + m2 + m3;
    }

    void calculatePercentage() {
        percent = (total/300)*100;
    }
    void display() {
        cout << "Roll no.: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << m1 << " " << m2 << " " << m3 << endl;
        cout << "Total marks: " << total << endl;
        cout << "Percentage obtained: " << percent << endl;
    }
};

int main() {
    Result r1(101, "Satyansh", 98.5, 99, 97.6);
    Result r2(r1);

    r2.updateMarks(95.7, 99.6, 95.4);

    r1.calculateTotal();
    r1.calculatePercentage();

    r2.calculateTotal();
    r2.calculatePercentage();

    r1.display();
    cout << endl;
    r2.display();
}
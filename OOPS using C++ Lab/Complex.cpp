#include <bits/stdc++.h>
using namespace std;

class comp {
    private:
    int real, img;

    public:
    void get() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> img;

        cout << "Your complex no.: " << real << " + " << img << "i";
    }

    comp sum(comp x, comp y) {
        comp ans;

        ans.real = x.real + y.real;
        ans.img = x.img + y.img;

        return ans;
    }

    void details() {
        cout << "The sum of the complex numbers is: " << real << " + " << img << "i" << endl;
    }
};

int main() {
    comp a,b,c;

    cout << "Enter first complex no.: " << endl;
    a.get();
    cout << endl;
    cout << "Enter second complex no.:" << endl;
    b.get();
    cout << endl;

    c = c.sum(a,b);

    c.details();
}
#include <bits/stdc++.h>
using namespace std;

class bank_account {
    private:
    int balance;
    int deposit;
    int withdraw;

    public:
    void input_balance() {
        cout << "Enter initial balance: ";
        cin >> balance;

        if(balance < 0) {
            cout << "Balance cannot be negative!\n";
        }
        else {
            cout << "Initial balance: " << balance << endl;
        }
    }

    void dep() {
        cout << "Enter the amount you want to deposit: ";
        cin >> deposit;
        if(deposit < 0) {
            cout << "Deposit amount cannot be negative!\n";
        }
        else {
            balance += deposit;
            cout << "Current balance: " << balance << endl;
        }
    }

    void with() {
        cout << "Enter the amount you want to withdraw: ";
        cin >> withdraw;

        if(withdraw < 0) {
            cout << "Withdrawl amount cannot be negative!\n";
        }
        else {
            if(withdraw > balance) {
                cout << "You don't have enough balance!\n";
            }
            else {
                balance -= withdraw;
            }
            cout << "Current balance: " << balance << endl;
        }
    }
};

int main() {
    bank_account A;
    A.input_balance();
    A.dep();
    A.with();
}
// 2. Class for Bank Account
// o Create a class BankAccount with data members like balance and member functions
// like deposit and withdraw. Implement encapsulation by keeping the data members
// private.
// o Objective: Understand encapsulation in classes.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;
public:
    BankAccount(int b) { balance = b; }
    void deposit(int amt) { balance += amt; }
    void withdraw(int amt) { if (balance >= amt) balance -= amt; }
    void show() { cout << balance << endl; }
};

int main() {
    BankAccount acc(1000);
    acc.deposit(500);
    acc.withdraw(300);
    acc.show();
    return 0;
}

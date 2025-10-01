// 1. Class for a Simple Calculator
// o Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.
// o Objective: Introduce basic class structure.

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }
    int mul(int a, int b) { return a * b; }
    int div(int a, int b) { return a / b; }
};

int main() {
    Calculator c;
    int a, b;
    cin >> a >> b;
    cout << c.add(a, b) << endl;
    cout << c.sub(a, b) << endl;
    cout << c.mul(a, b) << endl;
    cout << c.div(a, b) << endl;
    return 0;
}

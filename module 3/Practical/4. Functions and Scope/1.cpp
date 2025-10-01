// 1. Simple Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.
// o Objective: Practice defining and using functions in C++.

#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {
    int a, b;
    char op;
    cin >> a >> b >> op;
    if (op == '+') cout << add(a, b);
    else if (op == '-') cout << sub(a, b);
    else if (op == '*') cout << mul(a, b);
    else if (op == '/') cout << divide(a, b);
    else cout << "Invalid";
    return 0;
}

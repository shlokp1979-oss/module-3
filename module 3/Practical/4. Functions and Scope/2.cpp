// 2. Factorial Calculation Using Recursion
// o Write a C++ program that calculates the factorial of a number using recursion.
// o Objective: Understand recursion in functions.

#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}

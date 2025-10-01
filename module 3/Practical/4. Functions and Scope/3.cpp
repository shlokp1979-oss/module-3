// 3. Variable Scope
// o Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
// o Objective: Reinforce the concept of variable scope.

#include <iostream>
using namespace std;

int globalVar = 10;

void show() {
    int localVar = 20;
    cout << globalVar << endl;
    cout << localVar << endl;
}

int main() {
    int localVar = 30;
    cout << globalVar << endl;
    cout << localVar << endl;
    show();
    return 0;
}

// 3. Multiplication Table
// o Write a C++ program to display the multiplication table of a given number using a for
// loop.
// o Objective: Practice using loops.

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}

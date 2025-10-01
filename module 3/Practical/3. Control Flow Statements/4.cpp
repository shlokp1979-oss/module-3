// 4. Nested Control Structures
// o Write a program that prints a right-angled triangle using stars(*) with a nested loop.
// o Objective: Learn nested control structures.

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

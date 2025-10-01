// 1. Grade Calculator
// o Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.
// o Objective: Practice conditional statements (if-else).

#include <iostream>
using namespace std;
int main() {
    int marks;
    cin >> marks;
    if (marks >= 90) cout << "Grade A";
    else if (marks >= 75) cout << "Grade B";
    else if (marks >= 50) cout << "Grade C";
    else cout << "Fail";
    return 0;
}

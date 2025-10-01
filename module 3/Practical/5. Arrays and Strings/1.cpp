// 1. Array Sum and Average
// o Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.
// o Objective: Understand basic array manipulation.

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / n;
    return 0;
}

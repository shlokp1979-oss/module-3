// 3. String Palindrome Check
// o Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
// o Objective: Practice string operations.

#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool flag = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            flag = false;
            break;
        }
    }
    if (flag) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}
    
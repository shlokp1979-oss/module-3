// 2. Number Guessing Game
// o Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.
// o Objective: Understand while loops and conditional logic.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int number = rand() % 100 + 1, guess;
    while (true) {
        cin >> guess;
        if (guess == number) {
            cout << "Correct!";
            break;
        } else if (guess > number) {
            cout << "Too High" << endl;
        } else {
            cout << "Too Low" << endl;
        }
    }
    return 0;
}

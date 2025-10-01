// 3. POP vs. OOP Comparison Program
// o Write two small programs: one using Procedural Programming (POP) to calculate the
// area of a rectangle, and another using Object-Oriented Programming (OOP) with a
// class and object for the same task.
// o Objective: Highlight the difference between POP and OOP approaches.

#include <iostream>
using namespace std;


int calculateAreaPOP(int length, int width) {
    return length * width;
}


class Rectangle {
private:
    int length, width;

public:
    void setValues(int l, int w) {
        length = l;
        width = w;
    }
    int calculateArea() {
        return length * width;
    }
};

int main() {
    int length, width;

   
    cout << "=== Procedural Programming (POP) ===" << endl;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Area (POP) = " << calculateAreaPOP(length, width) << endl;

    
    cout << "\n=== Object-Oriented Programming (OOP) ===" << endl;
    Rectangle rect; 
    rect.setValues(length, width);  // reuse same input
    cout << "Area (OOP) = " << rect.calculateArea() << endl;

    return 0;
}

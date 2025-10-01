// 3. Inheritance Example
// o Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
// o Objective: Learn the concept of inheritance.

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void setName(string n) { name = n; }
    void showName() { cout << name << endl; }
};

class Student : public Person {
public:
    int roll;
    void setRoll(int r) { roll = r; }
    void showRoll() { cout << roll << endl; }
};

class Teacher : public Person {
public:
    string subject;
    void setSubject(string s) { subject = s; }
    void showSubject() { cout << subject << endl; }
};

int main() {
    Student s;
    s.setName("Shlok");
    s.setRoll(101);
    s.showName();
    s.showRoll();

    Teacher t;
    t.setName("Chirag");
    t.setSubject("Maths");
    t.showName();
    t.showSubject();

    return 0;
}

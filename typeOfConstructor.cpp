#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1;                    // Default constructor

    Student s2(101, "Ayush");      // Parameterized constructor

    Student s3 = s2;               // Copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
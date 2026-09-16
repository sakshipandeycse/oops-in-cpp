#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int marks;

public:

    // Parameterized Constructor
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Default Constructor
    Student() {
        cout << "Default Constructor" << endl;
        name = "Unknown";
        marks = 0;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        marks = s.marks;
    }

    void show() {
        cout << name << " " << marks << endl;
    }
};

int main() {

    // Parameterized constructor
    Student s1("Sakshi", 90);
    s1.show();

    // Copy constructor
    Student s2 = s1;
    s2.show();

    // Default constructor
    Student s3;
    s3.show();

    // Another object copied from s1
    Student s4 = s1;
    s4.show();

    return 0;
}
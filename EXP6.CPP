#include <iostream>
using namespace std;

class Student {
private:
    int roll;

public:
    // Default constructor
    Student() {
        roll = 0;
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    Student(int r) {
        roll = r;
        cout << "Parameterized Constructor" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        cout << "Copy Constructor" << endl;
    }

    void display() {
        cout << "Roll = " << roll << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2(101);
    s2.display();

    Student s3(s2);
    s3.display();

    return 0;
}
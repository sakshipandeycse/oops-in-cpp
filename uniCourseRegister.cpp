#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    double cgpa;
public:
    Student(int r, string n) {
        this->rollNo = r;
        this->name = n;
        this->cgpa = 0.0;
    }
    Student(int r, string n, double c) {
        this->rollNo = r;
        this->name = n;
        this->cgpa = c;
    }
    void updateCGPA(double cgpa) {
        this->cgpa = cgpa;
    }
    class Address {
        string city;
        string state;
    public:
        Address(string city, string state) {
            this->city = city;
            this->state = state;
        }
        void displayAddress() {
            cout << "City: " << city << endl;
            cout << "State: " << state << endl;
        }
    };
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
    void displayUpdatedCGPA() {
        cout << "Updated CGPA: " << cgpa << endl;
    }
};
int main() {
    Student s1(101, "Sakshi");
    Student s2(102, "Sakshi", 8.87);
    s1.updateCGPA(9.0);
    s1.display();
    s1.displayUpdatedCGPA();
    cout << endl;
    s2.display();
    cout << endl;
    Student::Address a1("Ghaziabad", "Uttar Pradesh");
    a1.displayAddress();
    return 0;
}
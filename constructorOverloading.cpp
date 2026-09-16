#include <iostream>
using namespace std;

class Student
{
public:
    Student()               // Default Constructor
    {
        cout << "Default Constructor Called" << endl;
    }

   

    Student(int id, string name)   // Overloaded Constructor
    {
        cout << "Student ID = " << id << endl;
        cout << "Student Name = " << name << endl;
    }
};

int main()
{
    Student s1;

    Student s3(102, "Sakshi");

    return 0;
}
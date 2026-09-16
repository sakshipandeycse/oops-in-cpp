#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    static int count;

public:
    Student(int m) {
        marks = m;
        count++;
    }

    friend void display(Student s);

    static void showCount() {
        cout << "Total Students = " << count << endl;
    }
};

int Student::count = 0;

void display(Student s) {
    cout << "Marks = " << s.marks << endl;
}

int main() {
    Student s1(80);
    Student s2(90);

    display(s1);
    display(s2);

    Student::showCount();

    return 0;
}
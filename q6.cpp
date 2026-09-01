#include <iostream>
using namespace std;

class Marks
{
private:
    int marks[5];

public:
    Marks()
    {
        cout << "Enter marks of 5 subjects: ";

        for (auto &m : marks)
        {
            cin >> m;
        }
    }

    void display()
    {
        cout << "Marks: ";

        for (auto m : marks)
        {
            cout << m << " ";
        }

        cout << endl;
    }

    friend int totalMarks(Marks m);
};

int totalMarks(Marks m)
{
    int total = 0;

    for (auto m1 : m.marks)
    {
        total += m1;
    }

    return total;
}

int main()
{
    Marks m;

    m.display();

    cout << "Total Marks = " << totalMarks(m);

    return 0;
}
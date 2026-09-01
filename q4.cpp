#include <iostream>
using namespace std;

int area(int side)
{
    return side * side;
}

int area(int length, int breadth)
{
    return length * breadth;
}

float simpleInterest(float p, float t, float r = 5)
{
    return (p * t * r) / 100;
}

int main()
{
    int side, length, breadth;
    float p, t, r;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "Area of square = " << area(side) << endl;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Area of rectangle = " << area(length, breadth) << endl;

    cout << "Enter principal and time: ";
    cin >> p >> t;

    cout << "Simple Interest (default rate 5%) = "
         << simpleInterest(p, t) << endl;

    cout << "Enter rate: ";
    cin >> r;

    cout << "Simple Interest = "
         << simpleInterest(p, t, r) << endl;

    return 0;
}
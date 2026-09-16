#include <iostream>
using namespace std;
// Inline function
inline int square(int n) {
    return n * n;
}
// Function overloading
float area(float side) {
    return side * side;
}
float area(float length, float breadth) {
    return length * breadth;
}
float area(double radius) {
    return 3.14 * radius * radius;
}
// Default argument
float simpleInterest(float p, float t, float r = 5) {
    return (p * t * r) / 100;
}
int main() {
    cout << "Square = " << square(5) << endl;

    cout << "Area of Square = " << area(4.0f) << endl;
    cout << "Area of Rectangle = " << area(4.0f, 5.0f) << endl;
    cout << "Area of Circle = " << area(3.0) << endl;

    cout << "Simple Interest = "
         << simpleInterest(1000, 2) << endl;
    return 0;
}
#include <iostream>
using namespace std;

// Inline function
inline int square(int x) {
    return x * x;
}

// Default argument
int add(int a, int b = 10) {
    return a + b;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

float multiply(float a, float b) {
    return a * b;
}

int main() {

    cout << "Square of 5: " << square(5) << endl;

    cout << "Addition of 10 and 20: "
         << add(10, 20) << endl;

    cout << "Addition using default argument: "
         << add(10) << endl;

    cout << "Integer Multiplication: "
         << multiply(5, 4) << endl;

    cout << "Float Multiplication: "
         << multiply(2.5f, 4.0f) << endl;

    return 0;
}
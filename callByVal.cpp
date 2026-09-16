#include <iostream>
using namespace std;

class Number {
public:
    void data(int x) {
        x = 50;
        cout << "Inside function: " << x << endl;
    }
};

int main() {
    int m = 100;
    Number n;

    n.data(m);

    cout << "Outside function: " << m << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// // Inline function
// inline int add(int a, int b) {
//     return a + b;
// }

// // Function overloading with different parameter types
// double add(double a, double b) {
//     return a + b;
// }

// // Default argument in function
// int subtract(int a, int b = 0) {
//     return a - b;
// }

// // Function overloading with different number of parameters
// int multiply(int a, int b, int c = 1) {
//     return a * b * c;
// }

// int main() {
//     cout << "Inline function: " << add(10, 5) << endl;
//     cout << "Default argument: " << subtract(20, 8) << endl;
//     cout << "Default argument with single value: " << subtract(20) << endl;
//     cout << "Overloaded float addition: " << add(2.5, 3.5) << endl;
//     cout << "Overloaded multiplication: " << multiply(4, 3, 2) << endl;
//     cout << "Multiplication with default value: " << multiply(4, 3) << endl;

//     return 0;
// }
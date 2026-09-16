#include <iostream>
using namespace std;

void callByValue(int x) {
    x = 50;
}

void callByReference(int &x) {
    x = 50;
}

void callByAddress(int *x) {
    *x = 50;
}

int main() {
    int a = 10, b = 10, c = 10;

    callByValue(a);
    callByReference(b);
    callByAddress(&c);

    cout << "After Call by Value: " << a << endl;
    cout << "After Call by Reference: " << b << endl;
    cout << "After Call by Address: " << c << endl;

    return 0;
}
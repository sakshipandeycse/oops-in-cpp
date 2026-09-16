#include <iostream>
using namespace std;

class Number {
public:
    void data(int &x) {
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
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Object passed as argument
    Number add(Number n) {
        Number result;
        result.value = value + n.value;

        // Returning object
        return result;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number n3 = n1.add(n2);

    n3.display();

    return 0;
}
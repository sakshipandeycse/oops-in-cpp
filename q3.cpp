#include <iostream>
using namespace std;
void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x, y;
    cout << "Enter two integer values: ";
    cin >> x >> y;
    cout << "\nBefore function call: x = " << x << ", y = " << y;

    swapByValue(x, y);
    cout << "\nAfter swap by value:  x = " << x << ", y = " << y;
    cout << "\nBefore function call: x = " << x << ", y = " << y;
    swapByReference(x, y);
    cout << "\nAfter swap by reference :  x = " << x << ", y = " << y;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Numbers {
public:
    void display() {
        int n;
        vector<int> v;

        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        cout << "Elements are: ";
        for (auto x : v) {
            cout << x << " ";
        }
    }
};
int main() {
    Numbers obj;
    obj.display();

    return 0;
}
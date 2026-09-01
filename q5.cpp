#include <iostream>
using namespace std;

class Product
{
public:
    string name;
    float price;

    Product(string n, float p)
    {
        name = n;
        price = p;
    }
};

Product higherPrice(Product p1, Product p2)
{
    if (p1.price > p2.price)
        return p1;
    else
        return p2;
}

int main()
{
    Product p1("Laptop", 50000);
    Product p2("Mobile", 30000);

    Product result = higherPrice(p1, p2);

    cout << "Product with higher price:" << endl;
    cout << "Name: " << result.name << endl;
    cout << "Price: " << result.price << endl;

    return 0;
}
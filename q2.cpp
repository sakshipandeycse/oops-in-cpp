#include <bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int employeeID;
    string name;
    float salary;
    public:
    void input();
    void display();
};
void Employee::input(){
    cout<<"Enter Employee ID: ";
    cin>>employeeID;
    cout<<"Name: ";
    cin>>name;
    cout<<"Salary: ";
    cin>>salary;
}
void Employee::display(){
    cout<<"Employee ID: "<<employeeID<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
}

int main(){
    Employee e;
    e.input();
    e.display();
    return 0;
}
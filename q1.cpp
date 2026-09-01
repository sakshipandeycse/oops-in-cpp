#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    int marks;
    public:
    void detail(int r,string n,int m){
        rollno=r;
        name=n;
        marks=m;
    }
    void display(){
        
        cout<<"Roll NO: "<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    Student s1;
    s1.detail(101,"Sakshi",90);
    s1.display();
    return 0;
}
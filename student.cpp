#include <iostream>
#include <string>
using namespace std;
class student {
    public:
    string name;
    int RollNum;
    float grade;
    void input()
    {
        cout<<"enter the name:";
        getline(cin,name);
        cout<<"enter the roll number:";
        cin>>RollNum;
        cout<<"enter the grade:";
        cin>>grade;
    }
    void display(){
        cout<<name<<endl;
        cout<<RollNum<<endl;
        cout<<grade<<endl;
    }
    void displaygrade(){
        if(grade>=85 && grade<100){
            cout<<"1st division" << endl;
        }
        else if (grade>=60 && grade<85){
            cout<<"2nd division" << endl;
        }
        else if(grade>=33 && grade<60){
            cout<<"3rd division" << endl;
        }
        else if(grade<0){
            cout<<"invalid result"<<endl;
        }
        else {
            cout<<"fail"<<endl;
        }
    }
};

int main() {
    student s;
    s.input();
    s.display();
    s.displaygrade();
    return 0;
}
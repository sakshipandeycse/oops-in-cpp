#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double>salary={100000,50000,45000,55000,30000,65000,76000,46000,85000,150000};
   int salaryAbove50000 = 0;

    cout <<"Salary:";
    for (auto x: salary) {
        cout << x;

        if (x > 50000) {
            salaryAbove50000++;
        }
        cout<<endl;
    }
    cout<<"Employees whose salary is more than 50000:"<<salaryAbove50000<<endl;
    int max;
    max=salary[0];
    for (auto x:salary){
        if(x>max){
            max=x;
        }
    }
    cout<<"Maximum salary:"<<max<<endl;
    int sum=0;
    
        for (auto x:salary){
            sum+=x;
            
        }
    
    int avg=sum/10;
    cout<<"total salary:"<<sum<<endl;
    cout<<"avg salary:"<<avg<<endl;
    
    return 0;
}
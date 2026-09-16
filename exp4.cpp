//auto and range for loop
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>number={10,20,30,40,50};
    for(auto x:number){
        cout<<x<<endl;
    }
    return 0;
}
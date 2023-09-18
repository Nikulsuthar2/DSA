#include <iostream>
using namespace std;

int main(){
    int a = 8, b = 5;

    cout<<"Before swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After swap"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
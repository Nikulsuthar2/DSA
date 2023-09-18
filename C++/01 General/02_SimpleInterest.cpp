#include <iostream>
using namespace std;

float simpleInterest(float p, float r, float t){
    return (p*r*t)/100;
}

int main(){
    cout<<"SI : "<<simpleInterest(1000,10,2)<<endl;
}
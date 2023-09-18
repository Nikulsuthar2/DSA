#include <iostream>
using namespace std;

void divisibleBy(int n, int x){
    if(n % x == 0)
        cout<<n<<" is divisible by "<<x<<endl;
    else
        cout<<n<<" is not divisible by "<<x<<endl;
}

int main(){
    divisibleBy(6,2);
    divisibleBy(11,2);
}
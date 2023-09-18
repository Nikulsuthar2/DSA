#include <iostream>
using namespace std;

void posNegZero(int n){
    if(n > 0){
        cout<<n<<" is a positive number"<<endl;
    }
    else if (n < 0) {
        cout<<n<<" is a negative number"<<endl;
    }
    else{
        cout<<n<<" is a zero"<<endl;
    }
}

int main(){
    posNegZero(-2);
    posNegZero(11);
    posNegZero(0);
}
#include <iostream>
using namespace std;

bool isPrime(int n){
    bool flag = true;
    if(n<2){
        return false;
    }
    for(int i = 2; i<=n/2; i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n = 17;
    if(isPrime(n)){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
}
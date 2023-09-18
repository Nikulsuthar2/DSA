#include <iostream>
using namespace std;

int sumofN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int sumofNFormula(int n){
    return (n * (n + 1)) /2;
}

int main(){
    int n = 10;
    cout<<"sum of "<<n<<" numbers is : "<<sumofN(n)<<endl;
    cout<<"sum of "<<n<<" numbers with smart is : "<<sumofNFormula(n);
}
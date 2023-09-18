#include <iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    int n = 134;
    cout<<"No of digit in "<<n<<" is : "<<countDigit(n);
}
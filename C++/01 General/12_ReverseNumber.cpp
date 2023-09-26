#include <iostream>
using namespace std;

int reverseNumber(int n){
    int ans = 0;
    while(n != 0){
        int d = n % 10;
        ans = ans * 10 + d;
        n /= 10;
    }
    return ans;
}

int main(){
    int n = 134;
    cout<<"Reverse of "<<n<<" is "<<reverseNumber(n);
}
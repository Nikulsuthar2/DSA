// C++ program to find sum of series
// x + x^2/2! + x^3/3! + ....+ x^n/n!

#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f *= i;
    }
    return f;
}

int printSum(int x, int n){
    double ans = x;
    int multi = x;
    for(int i = 2; i<=n; i++){
        double value = (x * multi) / (double)factorial(i);
        multi *= x;
        ans += value;
    }

    return ans;
}

int main(){
    cout<<printSum(2,2);
}
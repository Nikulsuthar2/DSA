#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n < 2) return 0;
    if(n == 2) return 1;

    return fibo(n-2) + fibo(n-1);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<fibo(n);
}
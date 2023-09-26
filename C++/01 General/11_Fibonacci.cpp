#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a=0, b=1, c=0;
    for(int i=1; i<=n; i++){
        cout<<c<<" ";
        a = b;
        b = c;
        c = a + b;
    }
}

int main()
{
    int n = 10;
    fibonacci(n);
}
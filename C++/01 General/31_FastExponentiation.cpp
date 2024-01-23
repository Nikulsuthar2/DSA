#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = ans * a;
        }
        a = a * a;
        b = b>>1;
    }
    return ans;
}

int main()
{
    int a = 2, b = 4;
    cout<<"Ans : "<<power(a,10);
}
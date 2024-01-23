#include<iostream>
using namespace std;

int GCD(int a, int b){
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a>b)
        return GCD(a%b,b);
    else
        return GCD(a,b%a);
}

int GCDITR(int a, int b){
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    while(a != b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main()
{
    int a = 24, b = 72;

    cout<<"GCD ITR : "<<GCDITR(a,b)<<endl;
    cout<<"GCD RCR : "<<GCD(a,b)<<endl;

}
#include <iostream>
using namespace std;

void printSeries(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        if(i==1){
            cout<<i;
        } 
        else{
            if(i % 2 == 0){
                cout<<"-"<<i;
                ans -= i;
            } 
            else{
                cout<<"+"<<i;
                ans += i;
            } 
        }
    }
    cout<<endl;
    cout<<"Value = "<<ans<<endl;
}

int main()
{
    int n = 10;
    printSeries(n);
}
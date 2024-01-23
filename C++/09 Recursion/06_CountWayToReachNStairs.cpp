#include<iostream>
using namespace std;
// cs 16
int countDistinctWaysToNthStair(int n)
{
    if(n < 0) return 0;
    if(n == 0) return 1;

    return countDistinctWaysToNthStair(n-1) + countDistinctWaysToNthStair(n-2);
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<countDistinctWaysToNthStair(n);
}
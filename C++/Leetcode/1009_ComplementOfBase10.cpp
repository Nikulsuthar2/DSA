#include <iostream>
using namespace std;

int base10Complement(int dec)
{
    int comp1 = ~dec;
    int mask = 0;

    while(dec != 0)
    {
        mask = mask << 1;
        mask = mask | 1;
        dec = dec >> 1;
    }
    return comp1 & mask;
}

int main()
{
    int n = 10;
    cout<<base10Complement(n);
}
#include <iostream>
#include <cmath>
using namespace std;

int binToDec(int bin)
{
    int ans = 0, i=0;
    while(bin != 0)
    {
        int d = bin % 10;
        if(d != 0)
            ans = d * pow(2,i) + ans;
        i++;
        bin /= 10;
    }
    return ans;
}

int main()
{
    int n = 101;
    cout<<n<<" in decimal "<<binToDec(n)<<endl;
}
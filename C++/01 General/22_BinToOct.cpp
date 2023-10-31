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

int binToOct(int bin)
{
    int ans = 0;
    int i = 0;
    while(bin != 0)
    {
        int bin3 = bin % 1000;
        ans = binToDec(bin3) * pow(10,i) + ans;
        i++;
        bin /= 1000;
    }

    return ans;
}

int main()
{
    int n = 1010;
    cout<<n<<" in octal "<<binToOct(n)<<endl;
}
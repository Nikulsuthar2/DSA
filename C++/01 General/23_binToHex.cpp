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

char hexChar(int dec)
{
    if(dec < 10)
        return '0' + dec;
    else
        return 'A' - 10 + dec;
}

string binToHex(long long int bin)
{
    string ans = "";
    while(bin != 0)
    {
        int bin4 = bin % 10000;
        int dec = binToDec(bin4);
        ans = hexChar(dec) + ans;
        bin /= 10000;
    }

    return ans;
}

int main()
{
    long long int n = 101001011111;
    cout<<n<<" in octal "<<binToHex(n)<<endl;
}
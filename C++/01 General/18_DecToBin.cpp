#include <iostream>
#include <cmath>
using namespace std;


int decToBin(int dec)
{
    int ans = 0, i = 0;

    while(dec != 0){
        int bit = dec&1;
        ans = (bit * pow(10,i)) + ans;
        dec = dec >> 1;
        i++;
    }

    return ans;
}

int main()
{
    int n = 12;
    cout<<"Binary of "<<n<<" is "<<decToBin(n);
}
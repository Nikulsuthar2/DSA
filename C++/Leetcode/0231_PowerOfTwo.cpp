#include <iostream>
using namespace std;

bool powerOfTwo(int n)
{
    int count = 0;
    while(n != 0)
    {
        int d = n&1;
        if(d == 1)
            count++;
        if(count > 1)
            return false;
        n = n>>1;
    }
    if(count == 1)
        return true;
    else
        return false;
}

int main()
{
    int n = 14;
    if(powerOfTwo(n))
        cout<<n<<" is power of 2"<<endl;
    else
        cout<<n<<" is not a power of 2"<<endl;
    return 0;
}
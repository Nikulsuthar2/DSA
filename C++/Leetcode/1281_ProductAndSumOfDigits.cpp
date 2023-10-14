#include <iostream>
using namespace std;

int productSum(int no)
{
    int product = 1, sum = 0;
    while(no != 0){
        int digit = no % 10;
        product *= digit;
        sum += digit;
        no /= 10;
    }

    return (product - sum);
}

int main()
{
    int no = 234;
    cout<<"Ans : "<<productSum(no);
}
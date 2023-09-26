#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int temp = n;
    int sum = 0;
    while (n != 0)
    {
        int d = n % 10;
        sum = sum * 10 + d;
        n /= 10;
    }
    if(sum == temp) return true;
    else return false;
}

int main()
{
    int n = 12321;
    if(isPalindrome(n)){
        cout<<n<<" is a palindrome number"<<endl;
    }
    else{
        cout<<n<<" is not a palindrome number"<<endl;
    }
}
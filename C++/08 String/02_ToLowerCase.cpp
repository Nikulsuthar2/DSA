#include <iostream>
using namespace std;

string toLowercase(string str)
{
    string newStr = "";
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            newStr += str[i] - 'A' + 'a';   
        else
            newStr += str[i];
    }
    return newStr;
}

int main()
{
    string str = "Hello BroTher";
    cout<<toLowercase(str);
}
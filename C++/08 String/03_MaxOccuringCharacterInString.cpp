#include <iostream>
#include <map>
#include <string>
using namespace std;

char maxOccurChar(string str)
{
    map<char, int> mp;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <='z'){
            mp[str[i]]++;   
        }
        else{
            mp[str[i] - 'A' + 'a']++;   
        }
    }
    int maxCount = 0;
    char maxChar;

    for(auto i : mp){
        if(i.second > maxCount){
            maxChar = i.first;
            maxCount = i.second;
        }
    }
    return maxChar;
}

int main()
{
    string str;
    cout<<"Enter String : ";
    getline(cin, str);
    cout<<"Max Occur Char : "<<maxOccurChar(str);
}
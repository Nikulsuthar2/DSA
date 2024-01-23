#include<iostream>
using namespace std;

void reverse(string &s, int i, int j){
    if(i>j) return;
    swap(s[i++],s[j--]);
    reverse(s,i,j);
}

int main()
{
    string str = "abcde";
    cout<<"Original : "<<str<<endl;
    reverse(str,0,str.length()-1);
    cout<<"Reversed : "<<str;
}
#include<iostream>
using namespace std;

int main()
{
    string str = "Welcome to Coding Ninjas";
    string finalstr = "", word = "";

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' '){
            finalstr = word + " " + finalstr;
            word = "";
        }
        else {
            word += str[i];
        }
    }
    finalstr = word + " " + finalstr;

    cout<<"Main String : "<<str<<endl;
    cout<<"Reverse Words : "<<finalstr<<endl;
}
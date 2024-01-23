#include<iostream>
using namespace std;

bool palindrome(string &s, int i, int j){
    if(i>=j) return true;
    if(s[i] == s[j]){
        i++;
        j--;
        return palindrome(s,i,j);
    }
    else{
        return false;
    }
}

int main()
{
    string str = "abcba";
    cout<<"String : "<<str<<endl;
    if(palindrome(str,0,str.length()-1)){
        cout<<"Yes";
    } else {
        cout<<"No";
    }

}
#include<iostream>
using namespace std;

bool checkPalindrome(string &s, int st, int e){
    while(st<=e){
        if(s[st] != s[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;
}
string longestPalindrome(string s) {
    int n = s.length();
    int st = 0, e = n-1;
    
    while(n>0){
        st = 0;
        e = n-1;
        for(int i=e; i<s.length(); i++){
            bool isPalindrome = checkPalindrome(s,st,i);
            if(isPalindrome){
                string longest = "";
                for(int k=st; k<=i; k++){
                    longest += s[k];
                }
                return longest;
            }
            st++;
        }
        n--;
    }
    return "";
}

int main()
{
    string s = "cbbd";
    string res = longestPalindrome(s);
    cout<<"ans : "<<res<<endl;
}

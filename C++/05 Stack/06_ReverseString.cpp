#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s = "Nikul";
    stack<char> st;

    for(int i=0; i<s.length(); i++)
    {
        st.push(s[i]);
    }
    s="";
    while(!st.empty()){
        s += st.top();
        st.pop();
    }

    cout<<s;
}
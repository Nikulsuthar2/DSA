#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> st;
    string prefix = "**L+AB/C-HJ";
    //             (L * (A+B)) * (C / (H-J))
    //             **L+AB/C-HJ
    //             LAB+*CHJ-/*

    for(int i=prefix.length()-1; i>=0; i--)
    {
        if(prefix[i] == '+' || prefix[i] == '-' || prefix[i] == '*' || prefix[i] == '/')
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();

            string ns = op1+op2+prefix[i];
            st.push(ns);
        }
        else{
            st.push(string(1,prefix[i]));
        }
    }

    cout<<st.top();
}
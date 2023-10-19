#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> st;
    string postfix = "LAB+*CHJ-/*";
    //             (L * (A+B)) * (C / (H-J))
    //             **L+AB/C-HJ

    for(int i=0; i<postfix.length(); i++)
    {
        if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/')
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();

            string ns = postfix[i]+op2+op1;
            st.push(ns);
        }
        else{
            st.push(string(1,postfix[i]));
        }
    }

    cout<<st.top();
}
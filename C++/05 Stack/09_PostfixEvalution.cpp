#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<float> st;
    string postfix = "987*+4/2-";

    for(int i=0; i<postfix.length(); i++)
    {
        if(postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/')
        {
            float op1 = st.top();
            st.pop();
            float op2 = st.top();
            st.pop();

            float ns;
            if(postfix[i] == '+')
                ns = op2 + op1;
            else if(postfix[i] == '-')
                ns = op2 - op1;
            else if(postfix[i] == '*')
                ns = op2 * op1;
            else if(postfix[i] == '/')
                ns = op2 / op1;
            st.push(ns);
        }
        else{
            st.push(stof(string(1,postfix[i])));
        }
    }

    cout<<st.top();
}
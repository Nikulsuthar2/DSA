#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<float> st;
    string prefix = "-/+9*8742";

    for(int i=prefix.length()-1; i>=0; i--)
    {
        if(prefix[i] == '+' || prefix[i] == '-' || prefix[i] == '*' || prefix[i] == '/')
        {
            float op1 = st.top();
            st.pop();
            float op2 = st.top();
            st.pop();

            float ns;
            if(prefix[i] == '+')
                ns = op1 + op2;
            else if(prefix[i] == '-')
                ns = op1 - op2;
            else if(prefix[i] == '*')
                ns = op1 * op2;
            else if(prefix[i] == '/')
                ns = op1 / op2;
            st.push(ns);
        }
        else{
            st.push(stof(string(1,prefix[i])));
        }
    }

    cout<<st.top();
}
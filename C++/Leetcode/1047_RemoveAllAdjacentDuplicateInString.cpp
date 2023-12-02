#include <iostream>
#include <stack>
using namespace std;

string removeAdjacentDuplicate(string s)
{
    string finalS = "";
    stack<char> st;
    for(int i=0; i<s.length(); i++)
    {
        if(!st.empty()){
            if(s[i] == st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else{
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        finalS = st.top() + finalS;
        st.pop();
    }
    return finalS;
}

int main()
{
    string s = "abbaca";
    cout<<"Ans : "<<removeAdjacentDuplicate(s);
}
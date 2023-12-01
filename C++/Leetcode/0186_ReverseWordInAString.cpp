#include <iostream>
#include <stack>
using namespace std;

string reverseWord(string str)
{
    string final = "";
    stack<char> st;
    
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] != ' '){
            st.push(str[i]);
        }else{
            while(!st.empty()){
                final += st.top();
                st.pop();
            }
            final += ' ';
        }
    }
    while(!st.empty()){
        final += st.top();
        st.pop();
    }
    return final;
}

int main()
{
    string str = "My name is Nik";
    cout<<reverseWord(str);
}
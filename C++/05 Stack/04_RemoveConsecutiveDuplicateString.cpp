#include <iostream>
#include <stack>
using namespace std;

int main (){
    string s = "ABCCDDBCCCEEFG";
    stack<char> st;

    for(int i=0; i<s.length(); i++)
    {
        if(st.empty())
            st.push(s[i]);
        else{
            if(st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
        }
    }
    string ns = "";
    while(!st.empty()){
        ns =  st.top() + ns;
        st.pop();
    }
    cout<<"String : "<<s<<endl;
    cout<<"New String : "<<ns;

}
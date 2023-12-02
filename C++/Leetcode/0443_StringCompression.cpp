/*
i/p = {a,a,b,b,b,c,c,c}  aabbbccc
o/p = {a,2,b,3,c,3}      a2b3c3
*/

#include <iostream>
#include <stack>
using namespace std;

string stringCompression(string s)
{
    int itr = 0;
    string finalS = "";
    stack<char> st;
    for(int i=0; i<s.length(); i++)
    {
        if(!st.empty()){
            if(s[i] == st.top()){
                st.push(s[i]);
            }
            else{
                int count = 0;
                char ch = st.top();
                while(!st.empty()){
                    st.pop();
                    count++;
                }
                if(count > 1){
                    char cnt = '0' + count;
                    finalS += ch;
                    finalS += cnt;
                }
                else
                    finalS += ch;
                
                st.push(s[i]);
            }
        }
        else{
            st.push(s[i]);
        }
    }
    int count = 0;
    char ch = st.top();
    while(!st.empty()){
        st.pop();
        count++;
    }
    if(count > 1){
        char cnt = '0' + count;
        finalS += ch;
        finalS += cnt;
    }
    else
        finalS += ch;
    return finalS;
}

int main()
{
    string s = "abbccc";
    cout<<"Ans : "<<stringCompression(s);
}
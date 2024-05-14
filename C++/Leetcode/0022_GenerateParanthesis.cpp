#include<iostream>
#include<vector>
using namespace std;

void generate(int n, int open, int close, string para, vector<string> &ans){
    if(open < close){
        return;
    }
    if(para.length() == 2*n){
        ans.push_back(para);
    }

    if(open < n){
        para.push_back('(');
        generate(n,open+1,close,para,ans);
        para.pop_back();
    }

    para.push_back(')');
    generate(n,open,close+1,para,ans);
    para.pop_back();
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    int open=0, close=0;
    string pa = "";
    generate(n,0,0,pa,ans);
    return ans;
}

int main(){
    vector<string> ans = generateParenthesis(2);

    for(auto i: ans){
        cout<<i<<" ";
    } 
    /*
    ((()))
    (()())
    (())()
    ()(())
    ()()()
    */
}
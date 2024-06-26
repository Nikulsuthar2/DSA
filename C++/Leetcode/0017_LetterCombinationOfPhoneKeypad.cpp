#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(string &digits, string output, int index, vector<string> &ans, string mapping[]){
    if(index >= digits.size()){
        ans.push_back(output);
        return;
    }
    int num = digits[index] - '0';
    string value = mapping[num];
    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(digits,output,index+1,ans,mapping);
        output.pop_back();
    }
}


vector<string> letterCombinator(string &digits){
    vector<string> ans;
    if(digits.length() == 0)
        return ans;
    string output = "";
    int index = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);
    return ans;
}


int main()
{
    string s = "23";
    vector<string> ans = letterCombinator(s);

    for(auto i:ans){
        cout<<"\""<<i<<"\" ";
    }
}
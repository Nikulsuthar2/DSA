#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(string s, int index, vector<string> &ans){
    if(index >= s.size()){
        ans.push_back(s);
        return;
    }
    for(int i=index; i<s.length(); i++){
        swap(s[i], s[index]);
        solve(s,index+1,ans);
        swap(s[i], s[index]);
    }
}


vector<string> permutations(string s){
    vector<string> ans;
    if(s.length() == 0)
        return ans;
    int index = 0;
    solve(s,index,ans);
    return ans;
}


int main()
{
    string s = "abc";
    vector<string> ans = permutations(s);

    for(auto i:ans){
        cout<<" "<<i<<" ";
    }
}
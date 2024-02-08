#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(string &s, string output, int index, vector<string> &ans){
    if(index >= s.size()){
        ans.push_back(output);
        return;
    }

    solve(s,output,index+1,ans);
    char element = s[index];
    output += element;
    solve(s,output,index+1,ans);
}


vector<string> subseq(string &s){
    vector<string> ans;
    if(s.length() == 0)
        return ans;
    string output = "";
    int index = 0;
    solve(s,output,index,ans);
    return ans;
}


int main()
{
    string s = "abc";
    vector<string> ans = subseq(s);

    sort(ans.begin(), ans.end());
    cout<<"Total subsets : "<<ans.size()<<endl;

    cout<<"{";
    int cnt = 1;
    while(cnt<=s.length()){
        for(int i=0; i<ans.size(); i++){
            if(ans[i].length() == cnt){
                cout<<ans[i]<<" ";
            }
        }
        cnt++;
    }
    cout<<"}";
}
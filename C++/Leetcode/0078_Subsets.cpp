#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> &arr, vector<int> output, int index, vector<vector<int>> &ans){
    if(index >= arr.size()){
        ans.push_back(output);
        return;
    }

    solve(arr,output,index+1,ans);
    int element = arr[index];
    output.push_back(element);
    solve(arr,output,index+1,ans);
}


vector<vector<int>> subset(vector<int> &arr){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(arr,output,index,ans);
    return ans;
}


int main()
{
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans = subset(arr);

    cout<<"Total subsets : "<<ans.size()<<endl;

    cout<<"{";
    for(auto i : ans){
        cout<<"{";
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<"} ";
    }
    cout<<"}";
}
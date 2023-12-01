#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<pair<int, int>> pairSum(int arr[], int size, int key)
{
    unordered_map<int, int> mp;
    vector<pair<int, int>> ans;
    for(int i=0; i<size; i++){
        int minus = key - arr[i];
        mp[minus] = i;
        
        if(mp.find(arr[i]) != mp.end()){
            ans.push_back({mp[arr[i]], i});
        }
    }
    return ans;
}

int main()
{
    int arr[] = {2, 7, 11, 13};
    int size = sizeof(arr)/sizeof(arr[0]);

    vector<pair<int, int>> psum = pairSum(arr,size,9);

    for(auto i : psum)
    {
        cout<<"arr["<<i.first<<"] : "<<arr[i.first]<<", arr["<<i.second<<"] : "<<arr[i.second]<<endl;
    }
}
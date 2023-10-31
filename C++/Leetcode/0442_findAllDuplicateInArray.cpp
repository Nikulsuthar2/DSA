#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDuplicate(int arr[], int size)
{
    unordered_map<int, int> freq;
    vector<int> duplicate;
    for(int i=0; i<size; i++)
    {
        freq[arr[i]]++;
    }

    for(auto i : freq)
    {
        if(i.second > 1)
            duplicate.push_back(i.first);
    }
    sort(duplicate.begin(),duplicate.end());
    return duplicate;
}

int main()
{
    int arr[8] = {4,3,2,7,8,2,3,1};
    vector<int> ans = findDuplicate(arr,8);

    for(int i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
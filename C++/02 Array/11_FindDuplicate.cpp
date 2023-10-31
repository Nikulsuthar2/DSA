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
    int arr[5] = {1,4,3,1,3};
    vector<int> ans = findDuplicate(arr,5);

    for(int i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
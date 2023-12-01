#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;
    int i=0, j=0;

    while(i<n && j<m)
    {
        if(arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {3,4,2};

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    vector<int> finalarr = findArrayIntersection(arr1,arr2);

    for(auto i : finalarr)
    {
        cout<<i<<" ";
    }
}
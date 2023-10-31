#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool checkUniqueFrequency(int arr[], int size)
{
    unordered_map<int, int> freq;

    for(int i=0; i<size; i++)
    {
        freq[arr[i]]++;
    }

    unordered_set<int> uniqueFreq;
    for(auto i : freq)
    {
        //cout<<i.first<<" - "<<i.second<<" : "<<uniqueFreq.count(i.second)<<endl;
        if(uniqueFreq.count(i.second))
            return false;
        else
            uniqueFreq.insert(i.second);    
    }

    return true;
}

int main()
{
    int arr[6] = {1,2,2,1,1,3};
    if(checkUniqueFrequency(arr, 6))
    {
        cout<<"Yes all unique frequency";
    }
    else
        cout<<"No unique frequency";
    return 0;
}
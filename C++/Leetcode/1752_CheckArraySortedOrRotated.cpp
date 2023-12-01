#include <iostream>
#include <vector>
using namespace std;

bool sortedAndRotatedArray(vector<int> arr)
{
    int count = 0;
    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i]>arr[i+1])
            count++;
    }
    if(arr[0] < arr[arr.size()-1]) count++;
    return count <= 1;
}

int main(){
    vector<int> arr = {9,10,1,7};
    if(sortedAndRotatedArray(arr)) {
        cout<<"Yes it is sorted or rotated";
    } else {
        cout<<"No it is not sorted and rotated";
    }
}
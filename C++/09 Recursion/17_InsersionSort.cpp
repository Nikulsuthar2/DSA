#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int index = 1){
    if(index>=arr.size()) return;

    int smallidx = index;
    for(int i = index-1; i>=0; i--){
        if(arr[i] < arr[smallidx]){
            break;
        }
        else{
            swap(arr[i],arr[smallidx]);
            smallidx = i;
        }
    }
    insertionSort(arr,++index);
}

int main()
{
    vector<int> arr = {3,7,4,8,6,5,9};
    insertionSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
}
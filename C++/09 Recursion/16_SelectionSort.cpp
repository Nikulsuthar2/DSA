#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int index = 0){
    if(index>=arr.size()) return;

    int smallidx = index;
    for(int i = index+1; i<arr.size(); i++){
        if(arr[smallidx] > arr[i]){
            smallidx = i;
        }
    }
    swap(arr[index],arr[smallidx]);
    selectionSort(arr,++index);
}

int main()
{
    vector<int> arr = {3,7,4,8,6,5,9};
    selectionSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
}
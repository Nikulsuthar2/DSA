#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if(n <= 0) 
        return true;
    
    if(arr[n] > arr[n-1]){
        return isSorted(arr, n-1);
    } 
    else {
        return false;
    }
}

int main()
{
    int arr[] = {1};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr,n-1)) {
        cout<<"Yes";
    } else {
        cout<<"No";
    }
}
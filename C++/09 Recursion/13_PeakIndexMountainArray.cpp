#include<iostream>
using namespace std;

int peakIndex(int arr[], int s, int e)
{
    if(s > e) return -1;
    int mid = (s+e)/2;
    if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
        return mid;
    }
    if(arr[mid] < arr[mid+1]){
        return peakIndex(arr,mid+1,e);
    }
    else{
        return peakIndex(arr,s,mid);
    }
}

int main()
{
    int arr[] = {1,2,3,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<peakIndex(arr,0,n-1)<<endl;
}
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key)
{
    if(s > e) return false;

    int mid = (s + e) / 2;
    
    if(arr[mid] == key)
        return true;
    
    if (arr[mid] < key)
        return binarySearch(arr,mid+1,e,key);
    else
        return binarySearch(arr,s,mid-1,key);
}

int main()
{
    int arr[] = {1,2,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 4;

    if(binarySearch(arr,0,n-1,key)){
        cout<<"Found";
    } else {
        cout<<"Not Found";
    }
}
#include<iostream>
using namespace std;

int firstOccurance(int arr[], int s, int e, int key){
    if(s > e) return -1;

    int mid = (s + e) / 2;

    if(arr[mid] == key){
        int pos = mid;
        int idx = firstOccurance(arr,s,mid-1, key);
        if(idx == -1){
            return pos;
        }
        else{
            return idx;
        }
    } 
    else if (arr[mid] < key) {
        return firstOccurance(arr,mid+1,e, key);
    }
    else {
        return firstOccurance(arr,s,mid-1, key);
    }

}

int lastOccurance(int arr[], int s, int e, int key){
    if(s > e) return -1;

    int mid = (s + e) / 2;

    if(arr[mid] == key){
        int pos = mid;
        int idx = firstOccurance(arr,mid+1,e, key);
        if(idx == -1){
            return pos;
        }
        else{
            return idx;
        }
    } 
    else if (arr[mid] < key) {
        return firstOccurance(arr,mid+1,e, key);
    }
    else {
        return firstOccurance(arr,s,mid-1, key);
    }

}

int main()
{
    int arr[] = {3,3,3,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    cout<<"first at : "<<firstOccurance(arr,0,n-1,key)<<endl;
    cout<<"last at : "<<lastOccurance(arr,0,n-1,key)<<endl;
}
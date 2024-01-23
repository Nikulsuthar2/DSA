#include<iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid)
{
    int size1 = mid - s + 1;
    int size2 = e - mid;
    int * ar1 = new int[size1];
    int * ar2 = new int[size2];

    for(int i=0; i<size1; i++)
    {
        ar1[i] = arr[s+i];
    }
    for(int i=0; i<size2; i++)
    {
        ar2[i] = arr[mid+i+1];
    }

    int idx1 = 0, idx2 = 0;

    int mainidx = s;
    while (idx1 < size1 && idx2 < size2)
    {
        if(ar1[idx1] > ar2[idx2]){
            arr[mainidx] = ar2[idx2];
            idx2++;
        }
        else{
            arr[mainidx] = ar1[idx1];
            idx1++;
        }
        mainidx++;
    }
    while (idx1 < size1)
    {
        arr[mainidx] = ar1[idx1];
        idx1++;
        mainidx++;
    }
    while (idx2 < size2)
    {
        arr[mainidx] = ar2[idx2];
        idx2++;
        mainidx++;
    }

    delete[] ar1;
    delete[] ar2;
}

void mergeSort(int arr[], int s, int e)
{
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e,mid);
}


void print(int arr[], int size)
{
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[] = {9,2,5,7,4,3,6,8,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    mergeSort(arr, 0, size-1);
    print(arr,size);
}
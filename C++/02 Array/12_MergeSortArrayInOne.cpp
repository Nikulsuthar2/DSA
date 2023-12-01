#include <iostream>
using namespace std;

void mergeSortArray(int arr1[],int arr2[], int m, int n)
{
    /*
    {1,3,5,7,9}
    {2,4,6}
    */

    for(int i=n-1; i>=0; i--)
    {
        int j;
        int last = arr1[m-1];
        for(j=m-2; j>=0 && arr1[j] > arr2[i]; j--){
            arr1[j+1] = arr1[j];
        }

        if(last > arr2[i]){
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }
    }
    
}

void printArray(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int m = 5, n = 3;
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

    mergeSortArray(arr1,arr2,m,n);

    printArray(arr1,m);
    printArray(arr2,n);
}
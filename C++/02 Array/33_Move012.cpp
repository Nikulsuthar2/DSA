#include<iostream>
using namespace std;

void move012(int arr[], int size, int types)
{
    int i=0, j = size-1;
    while(i<j){
        if(arr[i] == 0)
            i++;
        else if(arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i] <= arr[j]){
            j--;
        }
    }
    i=0;
    j = size-1;
    while(i<j){
        if(arr[i] == 0)
            i++;
        else if(arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i] <= arr[j]){
            j--;
        }
    }
}

int main()
{
    int arr[] = {0,2,2,1,0,1,1,0,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    move012(arr,size,4);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
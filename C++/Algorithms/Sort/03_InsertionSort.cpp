#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for(int i=1; i<size; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--)
        {
            if(arr[j] > temp)
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp;
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
    const int size = 6;
    int arr[size] = {1,7,9,2,3,0};

    cout<<"Before Array : ";
    printArray(arr,size);

    selectionSort(arr,size);

    cout<<"After Sorted Array : ";
    printArray(arr,size);
}
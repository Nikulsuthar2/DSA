#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for(int i=1; i<size; i++)
    {
        bool flag = false;
        for(int j=0; j<size-i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag)
            break;
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

    bubbleSort(arr,size);

    cout<<"After Sorted Array : ";
    printArray(arr,size);
}
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        int min = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
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
#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size)
{
    for(int i=0; i<size - 1; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }
}

int main()
{
    const int size = 5;
    int arr[size] = {1,2,7,8,5};
    printArray(arr, size);
    swapAlternate(arr, size);
    printArray(arr, size);
    return 0;
}
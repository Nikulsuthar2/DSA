#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int size)
{
    int s = 0 , e = size - 1;
    while (s<=e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main()
{
    const int size = 5;
    int arr[size] = {1,2,7,9,11};
    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);
    return 0;
}
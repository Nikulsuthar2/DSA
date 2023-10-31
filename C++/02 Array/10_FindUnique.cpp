#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findUnique(int arr[], int size)
{
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    const int size = 5;
    int arr[size] = {2,2,7,8,8};
    printArray(arr, size);
    cout<<"Unique element : "<<findUnique(arr, size)<<endl;
    return 0;
}
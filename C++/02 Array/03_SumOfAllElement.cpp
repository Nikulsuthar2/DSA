#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[6] = {3,5,2,9,7,5};
    printArray(arr,6);
    int sum = sumArray(arr,6);
    cout<<"Sum of Array : "<<sum;
}
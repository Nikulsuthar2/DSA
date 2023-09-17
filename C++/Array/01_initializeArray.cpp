#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void getArray(int arr[], int size){
    cout<<"Enter Array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

int main(){
    int arr[5];

    getArray(arr, 5);
    printArray(arr, 5);
}
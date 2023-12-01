#include <iostream>
using namespace std;

void moveZerosToRight(int arr[], int n)
{
    int j=0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0)
            swap(arr[i],arr[j++]);
    }
}
void printArray(int arr[],int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

int main(){
    int arr[5] = {0,1,0,3,12};
    moveZerosToRight(arr,5);
    printArray(arr,5);
}
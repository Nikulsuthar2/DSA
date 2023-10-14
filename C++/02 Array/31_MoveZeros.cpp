#include<iostream>
using namespace std;


void moveZeros(int arr[], int size)
{
    int i = 0, j = 0;
    /*while(i<size){
        if(arr[i] == 0 && arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[i] != 0) i++;
        else{
            j++;
        }
    }*/
    for(j=0; j<size; j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i++]);
        }
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {1,0,0,3,12};
    printArray(arr,5);
    moveZeros(arr,5);
    printArray(arr,5);
}
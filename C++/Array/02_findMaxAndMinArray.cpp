#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int maxArray(int arr[], int size){
    int ans = INT_MIN;
    for(int i=0; i<size; i++){
        if(ans < arr[i]){
            ans = arr[i];
        }
    }
    return ans;
}

int minArray(int arr[], int size){
    int ans = INT_MAX;
    for(int i=0; i<size; i++){
        if(ans > arr[i]){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    int arr[5] = {2,6,3,8,5};

    printArray(arr, 5);

    cout<<"Max element : "<<maxArray(arr,5)<<endl;
    cout<<"Min element : "<<minArray(arr,5);
}
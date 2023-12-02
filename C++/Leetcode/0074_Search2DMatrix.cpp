#include <iostream>
using namespace std;


int binarySearch2D(int arr[][3], int key){
    int col = 3;
    int s = 0 , e = 3*3 - 1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid/col][mid%col] == key){
            return mid;
        }
        else if (arr[mid/col][mid%col] < key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int key;

    cout<<"Enter Search Element : ";
    cin>>key;

    if(binarySearch2D(arr,key) >= 0){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}
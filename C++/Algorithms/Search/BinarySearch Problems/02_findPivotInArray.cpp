#include <iostream>
using namespace std;

int pivotOfRotatedArray(int arr[], int size)
{
    int s=0, e=size-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
        mid = s+(e-s)/2;
    }
    return e;
}

int main()
{
    int arr[5] = {7,9,1,2,3};

    int pivot = pivotOfRotatedArray(arr,5);

    cout<<"Pivot is "<<arr[pivot]<<" at "<<pivot;
    return 0;
}
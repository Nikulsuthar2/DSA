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

int binarySearch(int arr[], int size, int target)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while(s<=e)
    {
        if(arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    const int size = 5;
    int arr[size] = {7,9,1,2,3};

    int pivot = pivotOfRotatedArray(arr,size);

    int found = -1, target = 4;

    if(arr[pivot] <= target && target <= arr[size-1]) {
        found = binarySearch(arr+pivot,size-pivot,target);
        if(found != -1) {found += pivot;}
    }
    else
        found = binarySearch(arr,pivot,target);

    if (found>=0) {
        cout<<"Found at "<<found;
    } else {
        cout<<"Not Found";
    }
    return 0;
}
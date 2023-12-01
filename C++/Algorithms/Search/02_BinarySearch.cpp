#include<iostream>
using namespace std;

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
    int arr[] = {3,5,9,13,27,45,78};
    int size = sizeof(arr)/sizeof(arr[0]);

    int foundAt = binarySearch(arr,size,45);
    if(foundAt >= 0){
        cout<<"Found at "<<foundAt;
    } else {
        cout<<"Not Found";
    }

}
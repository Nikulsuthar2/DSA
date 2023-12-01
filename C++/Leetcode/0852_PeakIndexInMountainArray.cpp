#include <iostream>
using namespace std;

int peakIndex(int arr[], int size)
{
    int s=0, e=size-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1]){
            s= mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    int arr[4] = {3,6,5,1};
    
    int pidx = peakIndex(arr,4);

    cout<<"Peak is "<<arr[pidx]<<" at "<<pidx<<" index";
    return 0;
}
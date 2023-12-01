#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int target)
{
    int pos = -1;
    int s=0, e=size-1;
    int mid = s + (e-s) / 2;

    while(s<=e)
    {
        if(arr[mid] == target){
            pos = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
        
        mid = s + (e-s) / 2;
    }

    return pos;
}

int lastOccurance(int arr[], int size, int target)
{
    int pos = -1;
    int s=0, e=size-1;
    int mid = s + (e-s) / 2;

    while(s<=e)
    {
        if(arr[mid] == target){
            pos = mid;
            s = mid + 1;
        }
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
        
        mid = s + (e-s) / 2;
    }

    return pos;
}

int main()
{
    int arr[9] = {1,2,3,3,4,7,8,8,9};

    int f = firstOccurance(arr,9,8);
    int l = lastOccurance(arr,9,8);

    cout<<"first : "<<f<<endl;
    cout<<"last : "<<l<<endl;

}
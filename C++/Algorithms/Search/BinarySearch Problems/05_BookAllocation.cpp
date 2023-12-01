#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int mid, int m){
    int stud = 1;
    int allocated = 0;
    for(int i=0; i<size; i++)
    {
        if(allocated + arr[i] <= mid){
            allocated += arr[i];
        }
        else{
            stud++;
            if(stud >m || arr[i] > mid){
                return false;
            }
            allocated = arr[i];
        }
    }
    return true;
}

int maxPageAllocated(int arr[], int size, int m)
{
    int ans = 0;
    int sumOfPage = 0;
    for(int i=0; i<size; i++)
    {
        sumOfPage += arr[i];
    }
    int s=0, e=sumOfPage;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,size,mid,m)){
            e = mid - 1;
            ans = mid;   
        }
        else{
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }

    return ans;
}

int main()
{
    int arr[4] = {10,20,30,40};
    int m = 2;

    int maxPage = maxPageAllocated(arr,4,m);

    cout<<maxPage;
}
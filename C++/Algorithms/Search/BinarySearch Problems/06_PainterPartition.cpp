#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int mid, int m){
    int painter = 1;
    int painted = 0;
    for(int i=0; i<size; i++)
    {
        if(painted + arr[i] <= mid){
            painted += arr[i];
        }
        else{
            painter++;
            if(painter >m || arr[i] > mid){
                return false;
            }
            painted = arr[i];
        }
    }
    return true;
}

int maxPagepainted(int arr[], int size, int k)
{
    int ans = 0;
    int sumOfUnits = 0;
    for(int i=0; i<size; i++)
    {
        sumOfUnits += arr[i];
    }
    int s=0, e=sumOfUnits;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(isPossible(arr,size,mid,k)){
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
    int arr[4] = {5,5,5,5};
    int k = 2;

    int maxPage = maxPagepainted(arr,4,k);

    cout<<maxPage;
}
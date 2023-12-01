#include <iostream>
using namespace std;

bool isOK(int arr[],int size, int cows, int mid)
{
    int cowCount = 1;
    int cowPos = arr[0];

    for(int i=1; i<size; i++)
    {
        if(arr[i] - cowPos >= mid && cowCount < cows){
            cowCount++;
            cowPos = arr[i];
        }
    }
    if(cowCount < cows)
        return false;
    else
        return true;
}

int maxCowPos(int arr[], int size, int cows)
{
    int ans = 0;
    int min = arr[0];
    int max = arr[size-1];

    int mid = min + (max - min) / 2;

    while(min <= max)
    {
        if(isOK(arr,size,cows,mid)){
            min = mid + 1;
            ans = mid;
        }
        else{
            max = mid - 1;
        }
        mid = min + (max - min) / 2;
    } 

    return ans;
}

int main()
{
    //int arr[6] = {0,3,4,7,9,10};
    //int tcow = 4;

    int arr[5] = {1,2,3,4,6};
    int tcow = 2;
    int max = maxCowPos(arr,5,tcow);

    cout<<max;
}
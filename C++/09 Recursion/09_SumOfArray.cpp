#include<iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    if(n == 1) return *arr;
    return arr[0] + sumArray(arr+1, n-1);
}

int main()
{
    int arr[] = {3,2,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Sum: " << sumArray(arr,n) << endl;  
}
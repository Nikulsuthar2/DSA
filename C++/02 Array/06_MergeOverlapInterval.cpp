#include <iostream>
using namespace std;

int main()
{
    int arr[50][2], n;
    int arr2[50][2], m=0;

    cout<<"Enter no of intervals : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter interval "<<i+1<<" : ";
        cin>>arr[i][0]>>arr[i][1];
    }
    int prev = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i][0] <= prev){
            arr2[m-1][1] = arr[i][1];
        }
        else{

            arr2[m][0] = arr[i][0];
            arr2[m][1] = arr[i][1];
            m++;
        }
        prev = arr[i][1];
    }
    cout<<"[";
    for(int i=0; i<m; i++)
    {
        cout<<"["<<arr2[i][0]<<", "<<arr2[i][1]<<"],";
    }
    cout<<"]";
}

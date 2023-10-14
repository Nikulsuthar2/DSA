#include<iostream>

using namespace std;

int main()
{
    int n = 9;
    int arr[9] = {6,8,4,2,3,5,4,1,3};
    int ans = 0, diff = 0;

    for(int i=0; i<n; i++)
    {
        int minH = arr[i];
        for(int j=i+1; j<n; j++)
        {
            diff = j-i+1;
            minH = min(minH,arr[j]);
            int temp = minH * diff;
            if(temp > ans)
                ans = temp;
        }
    }

    cout<<"Max Area of Rectangle : "<<ans<<endl;
}
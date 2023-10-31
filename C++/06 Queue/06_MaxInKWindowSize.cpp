#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n = 8;
    int arr[8] = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    queue<int> q;
    int i=0, j=0;

    while(j<k){
        if(q.empty()){
            q.push(arr[j]);
        }
        else{
            if(q.back() < arr[j]){
                q.pop();
                q.push(arr[j]);
            }
        }
        j++;
    }
    while(i <= n - k)
    {
        if(!q.empty()){
            arr[i] = q.front();
            if(arr[j] > q.back() && j<n)
            {
                q.pop();
                q.push(arr[j]);
            }
            
        }

        i++;
        j++;
    }

    for(int i=0; i<=n-k; i++)
    {
        cout<<arr[i]<<" ";
    }
}
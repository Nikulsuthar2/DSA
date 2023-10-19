#include <iostream>
#include <stack>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    stack<int> st;
    int size = 6;
    int arr[6] = {5,7,1,2,6,0};
    printArray(arr,size);
    for(int i=size-1; i>=0; i--)
    {
       
        if(st.empty()) st.push(arr[i]);
        
        if(!st.empty() && st.top() > arr[i])
        {
            arr[i] = st.top();
            st.push(arr[i]);
        }
        else if (!st.empty() && st.top() < arr[i]){
            st.push(arr[i]);
            arr[i] = -1;
        }
        else{
            arr[i] = -1;
        }
    }
    printArray(arr,size);
}
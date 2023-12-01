#include<iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    const int n = 8;
    int arr[8] = {3,1,2,4,0,1,3,2};
    //  PGE    = {3,3,3,4,4,4,4,4};
    //  NGE    = {4,4,4,4,3,3,3,2};

    stack<int> st;
    vector<int> PGE, NGE;

    for(int i=0; i<n; i++)
    {

        if(!st.empty() && st.top() >= arr[i])
            PGE.push_back(st.top());
        else if (!st.empty() && st.top() < arr[i]){
            st.pop();
            st.push(arr[i]);
            PGE.push_back(st.top());
        }
        else if(st.empty()){
            st.push(arr[i]);
            PGE.push_back(arr[i]);
        }
    }

    while(!st.empty()) st.pop();

    for(int i=n-1; i>=0; i--)
    {
        if(!st.empty() && st.top() >= arr[i])
            NGE.push_back(st.top());
        else if (!st.empty() && st.top() < arr[i]){
            st.pop();
            st.push(arr[i]);
            NGE.push_back(st.top());
        }
        else if(st.empty()){
            st.push(arr[i]);
            NGE.push_back(arr[i]);
        }
    }

    reverse(NGE.begin(), NGE.end());

    int totalWater = 0;
    for(int i=0; i<n; i++)
    {
        int temp = min(NGE[i], PGE[i]) - arr[i];
        totalWater += temp;
    }

    cout<<"Total Water : "<<totalWater<<endl;
    return 0;
}
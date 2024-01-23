#include<iostream>
#include<stack>
using namespace std;

int sumOfTwoArray(int ar1[], int ar2[], int n, int m){
    int i=n-1;
    int j=m-1;
    int carry = 0;
    stack<int> ans;

    while(i>=0 && j>=0){
        int sum = ar1[i] + ar2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = ar1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push(sum);
        i--;
    }
    while(j>=0){
        int sum = ar2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push(sum);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push(sum);
    }

    int finalans = 0;

    while(!ans.empty()){
        int d = ans.top();
        finalans = finalans * 10 + d;
        ans.pop();
    }

    return finalans;
}

void printArray(int arr[], int size, int pads = 0){
    cout<<"Array : ";
    for(; pads > 0; pads--){
        cout<<"  ";
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int ar1[4] = {1,2,3,4};
    int ar2[2] = {7,6};

    printArray(ar1,4);
    printArray(ar2,2,2);

    cout<<"Sum : "<<sumOfTwoArray(ar1,ar2,4,2);
}
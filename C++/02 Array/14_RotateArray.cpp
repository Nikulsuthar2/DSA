#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    vector<int> ans(arr.size());

    for(int i=0; i<arr.size(); i++)
        ans[(i+k)%arr.size()] = arr[i];
    
    return ans;
}
void printArray(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    printArray(rotateArray(arr,3));
}
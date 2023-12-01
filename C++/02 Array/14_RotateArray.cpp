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
    vector<int> arr = {1,7,9,11};
    int k = 2;
    printArray(rotateArray(arr,2));
}
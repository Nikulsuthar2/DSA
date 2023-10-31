#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key)
            return true;
    }
    return false;
}

int main()
{
    const int size = 5;
    int arr[size] = {1,2,7,9,11};
    int key = 7;
    if(linearSearch(arr, size,key))
        cout<<"Found "<<key<<endl;
    else 
        cout<<"Not found "<<key<<endl;
    return 0;
}
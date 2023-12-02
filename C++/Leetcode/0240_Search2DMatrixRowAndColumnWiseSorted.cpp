#include <iostream>
using namespace std;


bool search2DRowAndColumnWiseSorted(int arr[][3], int key){
    int rowidx = 0;
    int colidx = 3-1;

    while(rowidx < 3 && colidx >= 0){
        int element = arr[rowidx][colidx];

        if(element == key)
            return true;
        if(element < key){
            rowidx++;
        }
        else{
            colidx--;
        }
    }
    
    return false;
}

int main()
{
    int arr[3][3] = {
        {1,4,5},
        {3,6,7},
        {8,9,10}
    };

    int key;

    cout<<"Enter Search Element : ";
    cin>>key;

    if(search2DRowAndColumnWiseSorted(arr,key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}
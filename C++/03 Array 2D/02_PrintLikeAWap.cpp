#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {3,4,11},
        {2,12,1},
        {7,8,9}
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Print Like A Wap :- "<<endl;
    for(int j=0; j<3; j++){
        if(j&1){
            for(int i=3-1; i>=0; i--)
                cout<<arr[i][j] << " ";
        } else {
            for(int i=0; i<3; i++)
                cout<<arr[i][j] <<" ";
        }
    }
}
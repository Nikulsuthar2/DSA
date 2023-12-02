#include <iostream>
using namespace std;

int main()
{
    int arr[50][50];
    int row,col;
    cout<<"Enter Row & Column : ";
    cin>>row>>col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix :- "<<endl;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
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

    int sr = 0, er = 3-1;
    int sc = 0, ec = 3-1;
    int total = 3*3, count = 0;

    cout<<"Spiral Print :- "<<endl;
    while(count < total){
        for(int i=sc; i<=ec; i++){
            cout<<arr[sr][i]<<" ";
            count++;
            if(count >= total) break;
        }
        sr++;

        for(int i=sr; i<=er; i++){
            cout<<arr[i][ec]<<" ";
            count++;
            if(count >= total) break;
        }
        ec--;

        for(int i=ec; i>=sc; i--){
            cout<<arr[er][i]<<" ";
            count++;
            if(count >= total) break;
        }
        er--;

        for(int i=er; i>=sr; i--){
            cout<<arr[i][sc]<<" ";
            count++;
            if(count >= total) break;
        }
        sc++;
    }
}
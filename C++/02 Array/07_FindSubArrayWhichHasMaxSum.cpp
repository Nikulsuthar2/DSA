#include <iostream>
using namespace std;

int main()
{
    int arr[50], n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = arr[0], from = 0, to = 0;
    for(int i=0; i<n; i++){
        int sum = arr[i];
        for(int j=i+1; j<n; j++)
        {
            sum += arr[j];
            if(ans < sum){
                ans = sum;
                from = i;
                to = j;
            }
        }
    }
    cout<<"Ans : "<<ans<<endl;
    cout<<"From "<<from<<" to "<<to<<endl;
}

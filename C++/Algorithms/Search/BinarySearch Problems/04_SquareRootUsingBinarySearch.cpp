#include <iostream>
using namespace std;

int sqrtBinarySearch(int x)
{
    int ans;
    int s=0, e=x/2;
    int mid = s + (e-s) / 2;
    
    while(s<e){
        if(mid*mid > x)
            e = mid;
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}

float sqrtPrec(int x, int xNop,int prec)
{
    int p = 1;
    float ans = xNop;
    for(int i=1; i<=prec; i++){
        p = p * 10;

        int s=0, e=10;
        int mid = s + (e-s) / 2;

        while(s<e){
            float tempans = xNop + (float)mid/p;
            if(tempans*tempans > x)
                e = mid;
            else{
                ans = tempans;
                s = mid + 1;
            }
            mid = s + (e-s) / 2;
        }
        ans = ans * p;
        int fn = (int)ans;
        ans = fn/(float)p;
    }
    return ans;
}

int main()
{
    int n = 8;

    int ans = sqrtBinarySearch(n);
    float realAns = sqrtPrec(n, ans, 2);
    cout<<"Sqrt of "<<n<<" is "<<ans<<" without precission"<<endl;
    cout<<"Sqrt of "<<n<<" is "<<realAns<<" with precission";
    return 0;
}
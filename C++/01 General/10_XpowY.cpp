#include <iostream>
using namespace std;

int powXY(int x, int y){
    int ans = 1;
    for(int i=1; i<=y; i++){
        ans *= x;
    }
    return ans;
}

int main(){
    int x = 4, y=3;
    cout<<x<<"^"<<y<<" = "<<powXY(x,y)<<endl;
}
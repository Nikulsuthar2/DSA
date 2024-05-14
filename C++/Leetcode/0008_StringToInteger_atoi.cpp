#include<iostream>
using namespace std;

int myAtoi(string s) {
    string num = "";

    //cout<<s.length()<<endl;
    for(int i=0; i<s.length(); i++)
    {
        cout<<"For "<<i<<" : "<<s[i];
        if((s[i] == '-' || s[i] == '+')  && num == ""){
            int d = s[i+1] - '0';
            if(d>=0 && d<=9){
                num += s[i];
                continue;
            }
            break;
        }
        int d = s[i] - '0';
        cout<<" d : "<<d<<" "<<num<<endl;
        if(d>=0 && d<=9){
            num += s[i];
        }
        else if(num.length() == 0 && (d < -16 || (d>-16 && d<0) || d>9)){
            break;
        }
        else if(num.length() >= 1 && (num[0] != '-' || num[0] != '+')){
            break;
        }
        else if(num.length() > 1){
            break;
        }
    }
    cout<<"\n"<<num<<endl;
    int no = 0;
    bool isNag = false;
    if(num[0] == '-'){
        if(num.length() >= 10 && num[1] - '0' > 2){
            return -2147483648;
        }
    }
    else{
        if(num.length() >= 10 && num[0] - '0' > 2){
            return 2147483647;
        }
    }
    for(int i=0; i<num.length(); i++){
        if(i==0 && num[i] == '-')
            isNag = true;
        else if (i == 0 && num[i] == '+')
            isNag = false;
        else 
            no = no*10 + (num[i] - '0');
    }
    if(isNag){
        no *= -1;
    }
    return no;
}

int main()
{
    //-2147483648 to 2147483647
    string s = "+1";
    cout<<myAtoi(s);
}

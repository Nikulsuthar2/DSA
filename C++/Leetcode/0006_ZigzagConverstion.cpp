#include<iostream>
using namespace std;


string convert(string s, int numRows) {
    if(numRows == 1){
        return s;
    }
    string newstr = "";
    int maxRowFac = (numRows * 2) - 2;
    for(int i=0; i<numRows; i++)
    {
        int rowFac = 1;
        if(i != numRows-1){
            rowFac = ((numRows-i) * 2) - 2;
        }
        else{
            rowFac = (numRows * 2) - 2;
        }
        int j = i;
        while(j<s.length()){
            newstr += s[j];
            //cout<<s[j]<<" ";
            j = j + rowFac;
            if(rowFac<maxRowFac && j<s.length()){
                newstr += s[j];
                //cout<<s[j]<<" ";
                j = j+maxRowFac-rowFac;
            }
        }
        //cout<<endl;
    }
    return newstr;
}
int main()
{
    string s = "ABC";
    int maxRow = 2;

    cout<<convert(s,maxRow);
}
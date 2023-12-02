#include <iostream>
using namespace std;

bool isEqual(int a[26],int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

bool foundPermutation(string s1, string s2)
{
    int count1[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int idx = s1[i] - 'a';
        count1[idx]++;
    }

    int i=0;
    int windowSize = s1.length();
    int count2[26] = {0};

    while(i<windowSize && i<s2.length()){
        int idx = s2[i] - 'a';
        count2[idx]++;
        i++;
    }

    if(isEqual(count1,count2)){
        cout<<"At "<<(i-2)<<" To "<<(i-1)<<endl;
        cout<<"Permutation is : "<<s2[i-2]<<s2[i-1]<<endl;
        return true;
    }

    while(i<s2.length()){
        char newChar = s2[i];
        int idx = newChar - 'a';
        count2[idx]++;
        char oldChar = s2[i-windowSize];
        idx = oldChar - 'a';
        count2[idx]--;
        i++;
        if(isEqual(count1,count2)){
            cout<<"At "<<(i-2)<<" To "<<(i-1)<<endl;
            cout<<"Permutation is : "<<s2[i-2]<<s2[i-1]<<endl;
            return true;
        }
    }

    return false;
}

int main()
{
    string s2 = "eidbaooo";
    string s1 = "ab";
    if(foundPermutation(s1,s2)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}
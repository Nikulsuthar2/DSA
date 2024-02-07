#include<iostream>
#include<unordered_map>
using namespace std;


int lengthOfLongestSubstring(string s) {
    int max = 0;
    unordered_map<char,int> mp;

    int currentMax = 0;
    for(int i=0; i<s.length(); i++)
    {
        //cout<<"Current char : "<<s[i]<<endl;
        if(mp.find(s[i]) != mp.end())
        {
            // if found duplicate
            //cout<<"Found at "<<i<<" - "<<s[i]<<endl;
            if(max < currentMax){
                max = currentMax;
                
            }
            currentMax = 0;
            mp.clear();
            mp[s[i]]++;
            currentMax++;
        }
        else
        {
            mp[s[i]]++;
            currentMax++;
        }
        //cout<<"Current Max : "<<currentMax<<", MAX : "<<max<<endl;
    }
    if(max < currentMax){
        max = currentMax;
    }

    return max;
}

int main()
{
    string s = "dvdf";
    cout<<lengthOfLongestSubstring(s);
}
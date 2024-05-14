#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

bool foundExist( vector<vector<int>> &ans, vector<int> temp){
    if(ans.size() == 0) return false;
    unordered_map<int, int> mp;
    for(int i=0; i<ans.size(); i++)
    {
        mp.clear();
        mp[ans[i][0]]++;
        mp[ans[i][1]]++;
        mp[ans[i][2]]++;
        if(mp.find(temp[0]) != mp.end() && mp.find(temp[1]) != mp.end() && mp.find(temp[1]) != mp.end())
        {
            if(mp[temp[0]] > 1 || mp[temp[1]] > 1 || mp[temp[0]] > 1) return false;
            return true;
        }
            
        mp.clear();
    } 
    return false;
}
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i = 0; i<nums.size()-2; i++){
        int s = i+1;
        int e = nums.size()-1;
        while(s<e)
        {
            int sum = nums[i]+nums[s]+nums[e];
            if(sum == 0){
                cout<<nums[i]<<"+"<<nums[s]<<"+"<<nums[e]<<"="<<sum<<endl;
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[s]);
                temp.push_back(nums[e]);
                bool found = foundExist(ans,temp);
                if(!found){
                    ans.push_back(temp);
                    cout<<"-------------true-----------"<<endl;
                }
                s++;
            }
            else if(sum < 0){
                s++;
            }
            else{
                e--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4,-2,-3,3,0,4};
    vector<vector<int>> ans = threeSum(nums); 

    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
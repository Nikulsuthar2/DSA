#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<pair<int,int>> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    vector<pair<int,int>> ans;
    
    for(int i=0; i<nums.size(); i++)
    {
        int temp = target - nums[i];
        
        if(mp.find(nums[i]) != mp.end()){
            cout<<"Found"<<endl;
            ans.push_back({mp[nums[i]],i});
        }
        mp[temp] = i;
    }
    return ans;
}

int main(){
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<pair<int,int>> ans = twoSum(nums, target);

    for(auto i : ans){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
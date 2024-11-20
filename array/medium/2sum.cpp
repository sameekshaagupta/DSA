#include<bits/stdc++.h>
using namespace std;
#include<map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_index;
        for(int i=0; i<nums.size(); i++){
            int complement=target-nums[i];
            if(num_index.find(complement)!=0){
                return {num_index[complement],i};
            }
            num_index[nums[i]]=i;
        }
        return {};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i]+nums[j])==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
#include<bits/stdc++.h>
using namespace std;
#include<map>
//hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            int num=nums[i];
            int rem=target-num;
            if(mpp.find(rem)!= mpp.end()){
                return {i, mpp[rem]};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};

//brute force
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

//sorting  but not recommended
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int sum=0;
        nums=nums.sort();
        while(start<end){
            sum=nums[start]+nums[end];
            if(sum>target){
                end--;
            }
            else if(sum<target){
                start++;
            }
            else if(sum==target){
                return {start,end};
            }
        }
        return {-1,-1};
    }
};
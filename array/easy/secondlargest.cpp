#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int x = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>x){
                x=nums[i];
            }
        }
        int y=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>y && nums[i]<x){
                y=nums[i];
            }
        }
        return y;
    }
};
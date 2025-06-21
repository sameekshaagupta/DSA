#include<bits/stdc++.h>
using namespace std;
//first approach
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;  
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[k++] = nums[i];
            }
        }
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
//optimized approach
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i;
        for(int a=0; a<nums.size(); a++){
            if(nums[a]==0){
                i=a;
                break;
            }
        }
        for(int a=i+1; a<nums.size(); a++){
            if(nums[a]!=0){
                swap(nums[i],nums[a]);
                i++;
            }
        }
    }
};
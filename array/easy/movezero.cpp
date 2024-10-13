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
        int nonZero=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[nonZero++], nums[i]);
            }
        }
    }
};
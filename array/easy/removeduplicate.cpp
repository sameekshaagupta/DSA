#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num=nums[0];
        int j=1;
        int k=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=num){
                nums[j]=nums[i];
                num=nums[i];
                k++;
                j++;
            }
        }
        return k;
    }
};
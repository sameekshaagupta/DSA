#include<bits/stdc++.h>
using namespace std;

//first approach
//shift by 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k>0){
            int a=nums[0];
            for(int i=0; i<nums.size(); i++){    
                int b=nums[(i+1)%nums.size()];
                nums[(i+1)%nums.size()]=a;
                a=b;
            }
            k--;
        }
    }
};

//shift by k;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k=k%nums.size();
        int a=k;
        vector<int> num(nums.size());
        for(int i=0; i<nums.size(); i++){
            num[(i+a)%nums.size()]=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]=num[i];
        }
    }
};
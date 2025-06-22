#include<bits/stdc++.h>
using namespace std;
//first approach;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int num=0;
        int arr=0;
        for(int i=0; i<nums.size(); i++){
            num=num+i+1;
            arr=arr+nums[i];
        }
        return num-arr;
    }
};

//second approach
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0;
        int xor2=0;
        for(int i=0; i<nums.size();i++){
            xor1=nums[i]^xor1;
            xor2=xor2^(i+1);
        }
        int result=xor1^xor2;
        return result;
    }
};
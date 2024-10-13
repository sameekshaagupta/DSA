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
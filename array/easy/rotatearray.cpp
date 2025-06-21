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
        reverse(nums,0, nums.size());
        reverse(nums, 0, k);
        reverse(nums,k, nums.size());
    }
    void reverse(vector<int>& nums,int a, int k){

        int i=a;
        int j=k-1;
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
};
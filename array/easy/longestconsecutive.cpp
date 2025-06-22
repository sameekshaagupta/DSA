#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0, currentcount=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                currentcount++;
            }
            else {
                if (currentcount > maxcount) {
                    maxcount = currentcount;
                }
                currentcount = 0; 
            }
        }
        return currentcount > maxcount ? currentcount : maxcount;
    }
};

//again
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int temp=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                temp++;
                if(temp>count){
                    count=temp;
                }
            }
            else{
                temp=0;
            }
        }
        return count;
    }
};
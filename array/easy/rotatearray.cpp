#include<bits/stdc++.h>
using namespace std;

//first approach
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


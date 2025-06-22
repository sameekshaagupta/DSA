#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int> nums;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                if(nums.size()==0||nums.back()!=nums1[i]){
                    nums.push_back(nums1[i]);
                }
                i++;
            }
            else if(nums1[i]>nums2[j]){
                if(nums.size()==0||nums.back()!=nums2[j]){
                    nums.push_back(nums2[j]);
                }
                j++;
            }else{
                if (nums.empty() || nums.back() != nums1[i])
                    nums.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        while(i<nums1.size()){
            if(nums.size()==0||nums.back()!=nums1[i]){
                nums.push_back(nums1[i]);
            }
            i++;
        }
        while(j<nums2.size()){
            if(nums.size()==0||nums.back()!=nums2[j]){
                nums.push_back(nums2[j]);
            }
            j++;
        }
        return nums;
    }
};
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int i=nums[0];
        for(int a=1; a<nums.size(); a++){
            if(nums[a]>i){
                i=nums[a];
            }
        }
        return i;
    }
};
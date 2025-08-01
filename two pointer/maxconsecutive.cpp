class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        int zero=0;
        int maxi=0;
        while(right<nums.size()){
            if(nums[right]==0){
                zero++;
            }
            if(zero>k){
                if(nums[left]==0){
                    zero--;
                }
                left++;
            }
            if(zero<=k){
                maxi=max(maxi,right-left+1);
            }
            right++;
        }
        return maxi;
    }
};
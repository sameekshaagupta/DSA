//1st approach t:O(N) s:(N)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int eve=0;
        int odd=1;
        vector<int> num(nums.size());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                num[eve]=nums[i];
                eve=eve+2;
            }
            else{
                num[odd]=nums[i];
                odd=odd+2;
            }
        }
        return num;
    }
};
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;
        vector<int> ans(nums.size());

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                ans[neg]=nums[i];
                neg=neg+2;
            }
            else{
                ans[pos]=nums[i];
                pos=pos+2;
            }
        }
        return ans;
    }
};
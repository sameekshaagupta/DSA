class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxx=-100000;
        bool nega=true;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                nega=false;
            }
            else{
                maxx=max(nums[i], maxx);
            }
        }
        if(nega){
            return maxx;
        }
        else{
            maxx=0;
            for(int i=0; i<nums.size(); i++){
                sum=sum+nums[i];
                if(sum<0){
                    sum=0;
                }
                if(sum>maxx){
                    maxx=sum;
                }
            }
            return maxx;
        }
    }
};
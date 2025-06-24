class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=INT_MIN;
        int sum=0;
        bool neg=true;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                neg=false;
            }else(nums[i]>maxx){
                    maxx=nums[i];
                }
        }
        if(!neg){
            for(int i=0; i<nums.size(); i++){
                sum=sum+nums[i];
                if(sum<0){
                    sum=0;
                }
                else if(sum>maxx){
                    maxx=sum;
                }
            }
        }
        if(nums.size()==0){
        return 0;
        }
        return maxx;
    }
};
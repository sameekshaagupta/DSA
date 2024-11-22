class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element=0;
        int count =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                element=nums[i];
                count++;
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        int cut=0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i]==element){
                cut++;
            }
        }
        if(cut >= nums.size()/2){
            return element;
        }
        return -1;
    }
};
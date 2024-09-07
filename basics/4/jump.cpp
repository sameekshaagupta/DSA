#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minJumps(vector<int>& arr) {
        if(arr.size()<1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        int jump=1;
        int step=arr[0];
        int maxReach = arr[0];
        for(int i=0; i<arr.size(); i++){
            if(i==arr.size()-1){
                return jump;
            }
            maxReach = max(maxReach, arr[i]+i);
            
            if(step==0){
                jump++;
                if (i >= maxReach) return -1; 
                step = maxReach - i;  
            }
            step--;
        }
        return jump;
    }
};
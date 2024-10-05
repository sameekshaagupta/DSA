#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        vector<int> arrr(N,0);
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<=N){
                arrr[arr[i]-1]+=1;
            }
        }
        arr.clear();
        for(int i=0; i<arrr.size(); i++){
            arr[i]=arrr[i];
        }
    }
};
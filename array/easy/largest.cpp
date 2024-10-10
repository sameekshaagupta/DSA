#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        int largest = arr[0];
        for(int i=1; i<arr.size(); i++){
            if(largest<arr[i]){
                largest = arr[i];
            }
        }
        return largest;
    }
};

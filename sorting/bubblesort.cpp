#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n) {
        int a=n;
        for(int i=0; i<n; i++){
            for(int j=0; j<a-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=temp;
                }
            }
            a--;
        }
    }
};
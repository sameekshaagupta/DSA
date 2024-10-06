#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int select(int arr[], int i, int n)
    {
        int small=arr[i];
        int index=i;
        for(int j=i; j<n; j++){
            if(small>arr[j]){
                small=arr[j];
                index=j;
            }
        }
        return index;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0; i<n; i++){
            int a= select(arr, i, n);
            swap(arr[i], arr[a]);
       }
    }
};
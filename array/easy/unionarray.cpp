#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i=0;
        int j=0;
        vector<int> unionn;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                if(unionn.empty()|| arr1[i]!=unionn.back()){
                    unionn.push_back(arr1[i]);
                }
                i++;
            }
            else if(arr1[i]>arr2[j]){
                if(unionn.empty()|| arr2[j]!=unionn.back()){
                    unionn.push_back(arr2[j]);
                }
                j++;
            }
            else {
                if (unionn.empty() || unionn.back() != arr1[i]) {
                    unionn.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        while(i<n){
            if (unionn.empty() || unionn.back() != arr1[i]) {
                unionn.push_back(arr1[i]);
            }
            i++;
        }
        while(j<m){
            if (unionn.empty() || unionn.back() != arr2[j]) {
                unionn.push_back(arr2[j]);
            }
            j++;
        }
        return unionn;
    }
};
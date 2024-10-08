#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void insert(int arr[],int a, int i)
    {
        while(a>=0){
                if(arr[i]<arr[a]){
                    int temp=arr[i];
                    arr[i]=arr[a];
                    arr[a]=temp;
                    i=a;
                }
                a--;
            }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i=1; i<n; i++){
            int a=i-1;
            insert(arr, a, i);
        }
    }
};
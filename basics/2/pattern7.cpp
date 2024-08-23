#include<bits/stdc++.h>
using namespace std;
void nStarTriangle(int n) {
    int i,flag,k;
    flag=1;
    for(i=1,k=0; i<=2*n-1; i++){
        if(i<n-k){
            cout << " ";
        }
        else{
            cout << "*";
            flag=1-flag;
        }
        if(i==n+k){
            k++;
            cout << endl;
            if(i==2*n-1){
                break;
            }
            i=0;
            flag=1;
        }
        if(i>n+k){
            cout << " ";
        }
    }
}
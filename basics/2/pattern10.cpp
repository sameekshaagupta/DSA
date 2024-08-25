#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    int a=n;
    for(int i=1; i<2*n; i++){
        if(i<=n){
            for(int j=0; j<i; j++){
                cout << "*";
            }
            cout << "\n";
        }
        if(i>n){
            for(int j=a-1; j>0; j--){
                cout << "*";
            }
            a--;
            cout << "\n";
        }
    }
}
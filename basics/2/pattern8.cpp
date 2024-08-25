#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    int i=n;
    int j;
    while(i>0){
        j=0;
        while(j<n-i){
            cout << " ";
            j++;
        }
        j=0;
        while(j<(2*i)-1){
            cout << "*";
            j++;
        }
        cout << "\n";
        i--;
    }
}
#include<bits/stdc++.h>
using namespace std;

void numberCrown(int n) {
    int b=1;
    int a=n-1;
    for(int i=2; i<=n+1; i++){
        for(int j=1; j<i; j++){
            cout << j<< " ";
        }
        for(int j=a; j>0 ; j--){
            cout << "  ";
        }
        for(int k=a; k>0; k--){
            cout << "  ";
        }
        while(b>0){
            cout << b << " ";
            b--;
        }
        b=b+i;
        a=a/2;
        cout << "\n";
    }
}
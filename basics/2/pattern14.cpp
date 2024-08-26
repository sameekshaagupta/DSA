#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    int a=65;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << char(a) << " ";
            a++;
        }
        a=65;
        cout << "\n";
    }
}
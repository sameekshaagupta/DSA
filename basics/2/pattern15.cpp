#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    int b=n;
    int a=65;
    for(int i=0; i<b; i++){
        for(int j=n; j>0; j--){
            cout << char(a) << " ";
            a++;
        }
        cout << "\n";
        n--;
        a=65;
    }
}
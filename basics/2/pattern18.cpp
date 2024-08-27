#include<bits/stdc++.h>
using namespace std;
void alphaTriangle(int n) {
    int b=n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            int a = 65+b-1;
            cout << char(a) << " ";
            b--;
        }
        b=n;
        cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
void nNumberTriangle(int n) {
    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout << a << " ";
            a++;
        }
        cout << "\n";
    }
}
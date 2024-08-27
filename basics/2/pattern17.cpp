#include<bits/stdc++.h>
using namespace std;

void alphaHill(int n) {
    int a = 65;
    int b = n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = b; j > 1; j--) {
            cout << " ";
        }
        b--;
        
        for(int j = 0; j < i; j++) {
            cout << char(a + j) << " ";
        }
        for(int j = i - 2; j >= 0; j--) {
            cout << char(a + j) << " ";
        }
        cout << "\n";
    }
}
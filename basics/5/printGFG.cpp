#include<bits/stdc++.h>
using namespace std;

class Solution {
  public: 
    void printGfg(int N) {
        int i=0;
        printhehe(i, N);
    }
    void printhehe(int i, int N){
        if(i==N){
            return;
        }
        else{
            cout << "GFG" << " ";
            printhehe(i+1, N);
        }
    }
};

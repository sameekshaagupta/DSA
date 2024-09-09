#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printNos(int N) {
        int a=N;
        printhehe(a,N);
    }
    void printhehe(int a, int N){
        if(a==0){
            return;
        }
        else{
            cout << a << " ";
            a--;
            printhehe(a,N);
        }
    }
};
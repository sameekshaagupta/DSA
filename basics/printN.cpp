#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        int i=1;
        
        printhehe(i,N);
    }
    void printhehe(int i,int N)
        {
            if(N<i){
                return;
            }
            else{
                cout << i << " ";
            printhehe(i+1,N);
            }
        }
};
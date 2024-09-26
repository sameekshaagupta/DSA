#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long sumOfSeries(long long n) {
        long long a=1;
        long long lol=0;
        long long ans = printhehe(a,n,lol);
        return ans;
    }
    long long printhehe(long long a, long long n, long long lol){
        if(a>n){
            return lol;
        }
        else{
            long long b=0;
            b=a*a*a;
            lol=lol+b;
            a++;
            printhehe(a,n,lol);
        }
    }
};
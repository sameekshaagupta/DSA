#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        long long i=1;
        vector<long long> hehe;
        hehe=factoriall(i,n,hehe);
        return hehe;
    }
    vector<long long> factoriall(long long i, long long n, vector<long long>& hehe){
        long long fact=1;
        for(long long j=i; j>0; j--){
            fact=fact*j;
        }
        if(fact<=n){
            hehe.emplace_back(fact);
            factoriall(i+1,n,hehe);
        }
        return hehe;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    long long gcd(long long A, long long B) {
        while (B != 0) {
            long long temp = B;
            B = A % B;
            A = temp;
        }
        return A;
    }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gc = gcd(A, B);  
        long long lcm = (A / gc) * B;  
        
        vector<long long> result;
        result.push_back(lcm);  
        result.push_back(gc);
        
        return result;
    }
};
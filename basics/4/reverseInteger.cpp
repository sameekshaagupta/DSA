#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long a = x;
        if (x > INT_MAX || x < INT_MIN) {
                return 0;
            }
        if(x<0){
            a=a/(-1);
        }
        
        long ans=0;
        string b = to_string(a);
        for(int i=0; i<b.length(); i++){
            int p = a%10;
            a=a/10;
            ans = ans*10+p;
        }
        long d=ans;
        if (ans > INT_MAX || ans < INT_MIN) {
                return 0;
            }
        if(x<0){
                d = -d;
                return d;
            }
        else{
            return d;
        }
    }
};
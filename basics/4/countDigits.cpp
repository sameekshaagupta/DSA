#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int ans=0;
        int x=N;
        string a=to_string(N);
        for(int i=0; i<a.length(); i++){
            int b=x%10;
            if(b!=0){
                if(N%b==0){
                    ans++;
                }
            }
            x=x/10;
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for (auto& b : s) { 
            b= tolower(b);
            if(isalnum(b)){
                ans+=b;
            }
        }
        int start=0;
        int end = ans.length()-1;
        while(start<end){
            if(ans[start]!=ans[end]){
                return false;
            }
            start++;
            end--;
        }
        return 1;
    }
};
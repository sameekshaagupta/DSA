#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        long original = x;
        long reversed = 0;
        
        // Reverse the number
        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        
        // Check if the reversed number is equal to the original number
        return reversed == original;
    }
};

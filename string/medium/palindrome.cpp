class Solution {
public:
    string longestPalindrome(string s) {
        int start=0;
        int maxLen=1;
        for(int i=0; i<s.length();i++){
            expand(s,i,i,start,maxLen);
            expand(s,i,i+1,start,maxLen);
        }
        return s.substr(start,maxLen);
    }
private:
    void expand(const string& s, int left, int right, int& start, int& maxLen){
        while(left>=0 && right <= s.length() && s[left]==s[right]){
            if((right-left+1)>=maxLen){
                maxLen=right-left+1;
                start=left;
            }
            left--;
            right++;
        }
    }
};

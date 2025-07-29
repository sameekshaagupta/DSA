class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256, -1);
        int l = 0, r = 0, maxp = 0;
        int n = s.size();

        while (r < n) {
            if (hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r;
            maxp = max(maxp, r - l + 1);
            r++;
        }
        return maxp;
    }
};

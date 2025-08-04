class Solution {
public:
    int characterReplacement(string& s, int k) {
        int a[26]{}, l=0, m=0;
        for (int r=0; r<s.size(); ++r) {
            m = max(m, ++a[s[r]-'A']);
            if (r - l + 1 - m > k) --a[s[l++]-'A'];
        }
        return s.size() - l;
    }
};

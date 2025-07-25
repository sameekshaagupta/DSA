class Solution {
public:
    int romanToInt(const string& s) {
        static const unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int sum = 0;
        int prev = 0;

        for (int i = s.length() - 1; i >= 0; --i) {
            int curr = roman.at(s[i]);
            if (curr < prev) {
                sum -= curr;
            } else {
                sum += curr;
            }
            prev = curr;
        }

        return sum;
    }
};

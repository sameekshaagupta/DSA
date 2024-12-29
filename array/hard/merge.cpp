class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Sort intervals based on the start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        for (const auto& interval : intervals) {
            // If merged is empty or there's no overlap, add the interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } else {
                // If there is overlap, merge the intervals
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};
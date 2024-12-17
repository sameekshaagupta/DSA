class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount; // Stores prefix sum frequencies
        prefixSumCount[0] = 1; // Initialize with sum 0 to handle subarrays starting at index 0
        
        int prefixSum = 0; // Running prefix sum
        int count = 0;     // Count of subarrays with sum == k
        
        for (int num : nums) {
            prefixSum += num; // Update the prefix sum
            
            // Check if (prefixSum - k) exists in the map
            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[prefixSum - k]; // Add its frequency to count
            }
            
            // Update the frequency of the current prefixSum
            prefixSumCount[prefixSum]++;
        }
        
        return count;
    }
};
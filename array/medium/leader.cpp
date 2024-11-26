class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        vector<int> leader;
        int maxx=arr[n-1];
        leader.emplace_back(maxx);
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=maxx){
                maxx=arr[i];
                leader.emplace_back(maxx);
            }
        }
        reverse(leader.begin(), leader.end());
        return leader;
    }
};
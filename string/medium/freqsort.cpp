class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        priority_queue<pair<int,char>> maxheap;
        for(auto& d:freq){
            maxheap.push({d.second, d.first});
        }
        string result="";
        while(!maxheap.empty()){
            auto [f,c] = maxheap.top();
            maxheap.pop();
            result += string(f,c);
        }
        return result;
    }
};
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;


// } Driver Code Ends
class AutoCompleteSystem {
    
private:
    unordered_map<string, int> frequencyMap;  // To store the frequency of sentences
    string currentInput;  // To store the current input string

    // Custom comparator for sorting
    static bool compare(const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;
    }
  public:

    AutoCompleteSystem(vector<string>& sentences, vector<int>& times) {
        for (int i = 0; i < sentences.size(); ++i) {
            frequencyMap[sentences[i]] = times[i];
        }
        currentInput = "";
    }


    vector<string> input(char c) {
        if (c == '#') {
            frequencyMap[currentInput]++;  // Record the complete sentence
            currentInput = "";  // Reset the current input
            return {};  // Return an empty list
        }

        currentInput += c;
        vector<pair<string, int>> matchedSentences;

        // Find sentences that match the current input prefix
        for (auto& entry : frequencyMap) {
            if (entry.first.find(currentInput) == 0) {
                matchedSentences.push_back(entry);
            }
        }

        // Sort by frequency and then by lexicographical order
        sort(matchedSentences.begin(), matchedSentences.end(), compare);

        // Collect the top 3 results
        vector<string> result;
        for (int i = 0; i < min(3, (int)matchedSentences.size()); ++i) {
            result.push_back(matchedSentences[i].first);
        }

        return result;
    }
};

/**
 * Your AutoCompleteSystem object will be instantiated and called as such:
 * AutoCompleteSystem* obj = new AutoCompleteSystem(sentences, times);
 * vector<string> param_1 = obj->input(c);
 */


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        vector<string> sentences(n);
        vector<int> times(n);
        for (int i = 0; i < n; ++i) {

            getline(cin, sentences[i]);
            cin >> times[i];
            cin.ignore();
        }
        AutoCompleteSystem *obj = new AutoCompleteSystem(sentences, times);
        int q;
        cin >> q;
        cin.ignore();

        for (int i = 0; i < q; ++i) {
            string query;
            getline(cin, query);
            string qq = "";
            for (auto &x : query) {
                qq += x;
                vector<string> suggestions = obj->input(x);
                if (x == '#')
                    continue;
                cout << "Typed : \"" << qq << "\" , Suggestions: \n";
                for (auto &y : suggestions) {
                    cout << y << "\n";
                }
            }
        }
    }
    return 0;
}

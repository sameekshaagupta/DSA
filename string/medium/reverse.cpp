class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        
        for (char ch : s) {
            if (ch != ' ') {
                word += ch;
            } else if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
        
        if (!word.empty()) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());
        string result;
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1) {
                result += ' ';
            }
        }

        return result;
    }
};

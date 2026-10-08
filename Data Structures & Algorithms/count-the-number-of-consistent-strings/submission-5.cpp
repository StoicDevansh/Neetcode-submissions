class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool allowedArr[26] = {};
        for (char c : allowed) {
            allowedArr[c - 'a'] = true;
        }

        int count = words.size();
        for (const string& w : words) {
            for (char c : w) {
                if (!allowedArr[c - 'a']) {
                    count--;
                    break;
                }
            }
        }

        return count;
    }
};
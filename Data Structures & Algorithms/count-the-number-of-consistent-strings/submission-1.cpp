class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;

        for (string word : words) {
            bool flag = true;

            for (char character : word) {
                bool found = false;

                for (char allowedCharacter : allowed) {
                    if (character == allowedCharacter) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                count++;
            }
        }

        return count;
    }
};
class Solution {
public:
    string largestGoodInteger(string num) {
        string result = "";

        for (int i = 0; i <= num.size() - 3; i++) {
            if (num[i] == num[i + 1] &&
                num[i + 1] == num[i + 2]) {

                string current = num.substr(i, 3);

                if (result == "" || current > result) {
                    result = current;
                }
            }
        }

        return result;
    }
};
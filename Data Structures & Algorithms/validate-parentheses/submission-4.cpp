class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> hashmap = {{')', '('},{']', '['},{'}', '{'}};

        for (char c : s) {
            if (hashmap.count(c)) {
                if (!stack.empty() && stack.top() == hashmap[c]) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
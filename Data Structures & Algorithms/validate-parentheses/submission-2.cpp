class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        unordered_map<char, char> hashmap ={ {')', '('}, {']', '['},{'}', '{'}
        };
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            else {
                if (st.empty() || st.top() != hashmap[ch]) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};
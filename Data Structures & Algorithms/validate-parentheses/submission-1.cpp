class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        
        if(s.length()% 2 !=0) return false;

        for (int i = 0; i <s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stac.push(s[i]);
            }
            else {
                if (stac.empty()) {
                    return false;
                }

                if (s[i] == ')' && stac.top() == '(') {
                    stac.pop();
                }
                else if (s[i] == ']' && stac.top()== '[') {
                    stac.pop();
                }
                else if (s[i] == '}' && stac.top()== '{') {
                    stac.pop();
                }
                else {
                    return false;
                }
            }
        }

        return stac.empty();
    }
};
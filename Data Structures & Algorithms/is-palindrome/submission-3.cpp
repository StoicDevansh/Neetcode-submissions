class Solution {
public:
    bool isPalindrome(string s) {
        string newStr="";
        for(char c : s){
            if(isalnum(c)){
                // newStr += tolower(c);
                newStr.push_back(tolower(c));
                // newStr= newStr + tolower(c) is wrong because tolower(c) returns integer while newStr+= tolower(c) here compiler automatically converts the integer to char.
                // or we can use 
                // newStr=newStr + static_cast<char> (tolower(c));
                
            }
        }

        return (newStr== string(newStr.rbegin(),newStr.rend()));
    }
};

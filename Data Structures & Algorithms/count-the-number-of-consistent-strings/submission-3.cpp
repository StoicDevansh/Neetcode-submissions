class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool allowedChar[26]={};
        for (char ch: allowed){
            allowedChar[ch- 'a']=true;
        }

        int count=0;
        for(string word: words){
            bool flag=true;
            for(char ch: word){
                if(!allowedChar[ch-'a']){
                    flag=false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};
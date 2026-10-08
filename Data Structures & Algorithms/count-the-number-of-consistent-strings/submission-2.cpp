class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0; 
        for( string word : words){
            bool flag= true;
            for( char ch: word){
                if(allowed.find(ch)== string :: npos){
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
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> hashmap;
        for(int i=0; i<size(s); i++){
            if(hashmap.find(s[i])==hashmap.end()){
                hashmap[s[i]]=i;
            }
            else{
                hashmap[s[i]]=size(s);
            }
        }
        int result=size(s);
        for(const auto& [key,index]: hashmap){
            result=min(result,index);
        }
        return result==size(s) ? -1 : result;
    }
};
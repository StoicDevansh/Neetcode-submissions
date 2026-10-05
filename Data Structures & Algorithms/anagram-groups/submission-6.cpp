class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        for( const auto& s: strs){
            string sortedStr=s;
            sort(sortedStr.begin(), sortedStr.end());
            hashmap[sortedStr].push_back(s);
        }
        vector<vector<string>> result;
        // or we can use 
        // for (auto& [k,v]: hashmap){
        // result.push_back(v);
        // }
        for (auto& pair : hashmap){
            result.push_back(pair.second);
        }
        return result;
    }
};

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> hashmap;
        int count=0;
        for(int num: nums){
            hashmap[num]++;
        }
        for(auto& [num,c]: hashmap){
            count+= c* (c-1)/2;
        }
        return count;
    }
};
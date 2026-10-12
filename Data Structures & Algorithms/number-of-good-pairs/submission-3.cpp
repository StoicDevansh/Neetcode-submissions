class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> hashmap;
        for(int i=0;i<nums.size();i++){
            count+=hashmap[nums[i]];
            hashmap[nums[i]]++;
        }
        
        return count;
    }
};
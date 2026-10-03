class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mappings;
        for(int i=0; i<nums.size();i++){
            int numNeed= target-nums[i];
            if(mappings.count(numNeed)){
                return {mappings[numNeed], i};
            }
            mappings[nums[i]]=i;
        }
        return{};
    }
};

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> hashmap;

        int duplicate = -1;
        int missing = -1;

        for (int ar : nums) {
            hashmap[ar]++;
        }

        for (int i = 1; i <= nums.size(); i++) {
            if (hashmap[i] == 2) {
                duplicate = i;
            }

            if (hashmap[i] == 0) {
                missing = i;
            }
        }

        return {duplicate, missing};
    }
};
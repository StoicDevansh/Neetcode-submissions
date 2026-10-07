class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int duplicate = -1;
        int missing = -1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                duplicate = nums[i];
            }
        }

        for (int i = 1; i <= nums.size(); i++) {

            bool found = false;

            for (int num : nums) {
                if (num == i) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                missing = i;
                break;
            }
        }

        return {duplicate, missing};
    }
};
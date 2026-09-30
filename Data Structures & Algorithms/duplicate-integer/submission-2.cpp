class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0; i < size(nums); i++) {
            for (int j = i + 1; j < size(nums); j++) {

                if (nums[i] == nums[j]) {
                    return true;
                }

            }
        }

        return false;
    }
};
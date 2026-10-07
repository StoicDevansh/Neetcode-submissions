class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int duplicateNo = -1;
        int missing = -1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] == nums[i - 1]) {
                duplicateNo = nums[i];
            }

            if(nums[i] > nums[i - 1] + 1) {
                missing = nums[i - 1] + 1;
            }
        }

        if(nums[0] != 1) {
            missing = 1;
        }

        if(missing == -1) {
            missing = nums.size();
        }

        return {duplicateNo, missing};
    }
};
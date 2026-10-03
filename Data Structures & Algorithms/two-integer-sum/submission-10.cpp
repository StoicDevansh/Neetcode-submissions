class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            indices[i] = i;
        }
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return nums[a] < nums[b];
        });

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[indices[left]] + nums[indices[right]];

            if (sum == target) {
                int index1 = indices[left];
                int index2 = indices[right];

                return {
                    min(index1, index2),
                    max(index1, index2)
                };
            }

            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {};
    }
};
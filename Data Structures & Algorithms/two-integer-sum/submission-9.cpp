class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> numbers;
        for (int i = 0; i < nums.size(); i++) {
            numbers.push_back({nums[i], i});
        }

        sort(numbers.begin(), numbers.end());

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left].first + numbers[right].first;

            if (sum == target) {
                int index1 = numbers[left].second;
                int index2 = numbers[right].second;

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
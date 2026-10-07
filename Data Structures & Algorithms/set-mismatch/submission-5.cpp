class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n = nums.size();

        int xorAll = 0;
        int xorNums = 0;

        for (int i = 1; i <= n; i++) {
            xorAll ^= i;
        }

        for (int num : nums) {
            xorNums ^= num;
        }

        int duplicateXorMissing = xorAll ^ xorNums;

        int differentBit = duplicateXorMissing & -duplicateXorMissing;

        int group1 = 0;
        int group2 = 0;

        for (int i = 1; i <= n; i++) {
            if (i & differentBit)
                group1 ^= i;
            else
                group2 ^= i;
        }

        for (int num : nums) {
            if (num & differentBit)
                group1 ^= num;
            else
                group2 ^= num;
        }
        for (int num : nums) {
            if (num == group1)
                return {group1, group2};
        }

        return {group2, group1};
    }
};